#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "copro-armnative.h"

#include "startup.h"
#include "rpi-base.h"
#include "tube-lib.h"
#include "tube-isr.h"
#include "tube-ula.h"

static int debug = 0;

void setTubeLibDebug(int d)
{
  debug = d;
}

// Reg is 1..4
void sendByte(unsigned char reg, unsigned char byte)
{
  unsigned char addr = (reg - 1) * 2;
  if (debug >= 2)
  {
    printf("waiting for space in R%d\r\n", reg);
  }
  while ((tubeRead(addr) & F_BIT) == 0x00)
    ;
  if (debug >= 2)
  {
    printf("done waiting for space in R%d\r\n", reg);
  }
  tubeWrite((reg - 1) * 2 + 1, byte);
  if (debug >= 1)
  {
    printf("Tx: R%d = %02x\r\n", reg, byte);
  }
}

// Reg is 1..4
unsigned char receiveByte(unsigned char reg)
{
  unsigned char byte;
  unsigned char addr = (reg - 1) * 2;
  if (debug >= 2)
  {
    printf("waiting for data in R%d\r\n", reg);
  }
  while ((tubeRead(addr) & A_BIT) == 0x00)
    ;
  if (debug >= 2)
  {
    printf("done waiting for data in R%d\r\n", reg);
  }
  byte = tubeRead((reg - 1) * 2 + 1);
  if (debug >= 1)
  {
    printf("Rx: R%d = %02x\r\n", reg, byte);
  }
  return byte;
}

// Reg is 1..4
void sendString(unsigned char reg, unsigned char terminator, const volatile char *buf)
{
  char c;
  do
  {
    c = *buf++;
    sendByte(reg, (unsigned char) c);
  }
  while (c != terminator);
}

// Reg is 1..4
int receiveString(unsigned char reg, unsigned char terminator, volatile char *buf)
{
  int i = 0;
  unsigned char c;
  do
  {
    c = receiveByte(reg);
    buf[i++] = (char) c;
  }
  while (c != terminator);
  return i;
}

// Reg is 1..4
void sendBlock(unsigned char reg, int len, const unsigned char *buf)
{
  // bytes in a block are transferred high downto low
  buf += len;
  while (len-- > 0)
  {
    sendByte(reg, (*--buf));
  }
}

// Reg is 1..4
void receiveBlock(unsigned char reg, int len, unsigned char *buf)
{
  // bytes in a block are transferred high downto low
  // bytes in a block are transferred high downto low
  buf += len;
  while (len-- > 0)
  {
    *--buf = receiveByte(reg);
  }
}

// Reg is 1..4
void sendWord(unsigned char reg, unsigned int word)
{
  sendByte(reg, (unsigned char) (word >> 24));
  word <<= 8;
  sendByte(reg, (unsigned char) (word >> 24));
  word <<= 8;
  sendByte(reg, (unsigned char) (word >> 24));
  word <<= 8;
  sendByte(reg, (unsigned char) (word >> 24));
}

// Reg is 1..4
unsigned int receiveWord(unsigned char reg)
{
  int word = receiveByte(reg);
  word <<= 8;
  word |= receiveByte(reg);
  word <<= 8;
  word |= receiveByte(reg);
  word <<= 8;
  word |= receiveByte(reg);
  return word;
}
