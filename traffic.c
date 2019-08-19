/*Connect the interface over J2 of MCBX51 adapter */
/* This program simutaes the traffic light */


#include<stdio.h>
#include <REG51RD2.H>

void delay(int k);


unsigned char xdata control _at_ 0xe003;
unsigned char xdata porta _at_ 0xe000;
unsigned char xdata portb _at_ 0xe001;
unsigned char xdata portc _at_ 0xe002;
unsigned char code str[31]={0x10,0x81,0x7a,
						    0x44,0x44,0xf0,
						    0x8,0x11,0xe5,
						    0x44,0x44,0xf0,
						    0x81,0x10,0xda,
						    0x44,0x44,0xf0,
						    0x11,0x8,0xb5,
						    0x44,0x44,0xf0,
						    0x88,0x88,0x00,
						    0x44,0x44,0xf0,
						    0x00
};
				
void main()
{
	  unsigned int i;
   control = 0x80;
 
   while(1)
   {
    for(i=0;i<30;i++)
    {
	  P0=str[i];
	  porta = str[i];
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  i++;
	  P1=str[i];
	  portb = str[i];
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  i++;
	  P2=str[i];
	  portc = str[i];
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  delay(10000);
	  i++;
	}
   }
}

void delay(int k)
{
  int p;
  for(p=0;p<=k;p++)
  {
   ;
  }
}
