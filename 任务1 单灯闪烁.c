#include<reg51.h>
   sbit P1_0=P1^0;
void  delay(unsigned  int i)
{
	unsigned int  k;
  for(k=0;k<i;k++);	
}
void  main()
{
 while(1)
 {
	 P1_0=0;
	 delay (10000);
	 P1_0=1;
	 delay(10000);
 }
}	