#define NUM_ITER 1040720

#include <header.h>

int main_bench()
{  
   int m[6];
   int a,b,c,d,e,n,i;
   my_scanf("%d",&n);
   
	   m[0]=(n-n%100)/100;
	   a=n-m[0]*100;
	   m[1]=(a-a%50)/50;
	   b=a-m[1]*50;
	   m[2]=(b-b%20)/20;
	   c=b-m[2]*20;
	   m[3]=(c-c%10)/10;
	   d=c-m[3]*10;
	   m[4]=(d-d%5)/5;
	   e=d-m[4]*5;
	   m[5]=e;
	   for(i=0;i<5;i++)
	   my_printf("%d\n",m[i]);
       my_printf("%d",m[5]);
	return 0;
}