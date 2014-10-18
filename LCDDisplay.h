//
//  LCDDisplay.h
//  MSP430RealTimeOS
//
//  Created by Benn Thomsen on 17/10/2014.
//  Copyright (c) 2014 Benn Thomsen. All rights reserved.
//

#ifndef MSP430G2553
#define MSP430G2553
#include <msp430g2553.h>
#endif

#define ADDRESS 0x3E                // LCD Shield I2C Address
#define S1 BIT4                     // LCD Shield Switch 1 (P1.4)
#define SW2 BIT3                    // Launchpad Switch 2 (P1.3)
#define S2 BIT0                     // LCD Shield Switch 1 (P2.0)
#define S3 BIT1                     // LCD Shield Switch 1 (P2.1)
#define S4 BIT3                     // LCD Shield Switch 1 (P2.3)
#define S5 BIT2                     // LCD Shield Switch 1 (P2.2)


char pressRelease1;	   // Flag set to switch number when a switch on port1 is clicked
char pressRelease2;    // Flag set to switch number when a switch on port2 is clicked

void LCDConfigure(unsigned char address);
void LCDWriteString(char *string, unsigned char strLength);
void LCDHome(void);
void LCDClear(void);