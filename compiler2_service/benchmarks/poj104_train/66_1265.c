#define NUM_ITER 75879

#include <header.h>

int main_bench()
{
   int a,b,c,d=0,i,e,run=0,ping=0;
   my_scanf("%d%d%d",&a,&b,&c);
   a=a%400;
   if(a==0) a=5;
   for(i=1;i<=(a-1);i++)
   {
       if(i%4==0&&i%100!=0||i%400==0)
	   {
	       run++;
	   }
	   else ping++;
   }
   d=d+ping+2*run;
   for(i=1;i<=(b-1);i++)
   {
	   if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) d=d+31;
	   else if(i!=2) d=d+30;
	   else if(i==2&&(a%4==0&&a%100!=0||a%400==0)) d=d+29;
	   else d=d+28;
   }
   d=d+c;
   e=d%7;
   if(e==1) my_printf("Mon.");
   else if(e==2) my_printf("Tue.");
   else if(e==3) my_printf("Wed.");
   else if(e==4) my_printf("Thu.");
   else if(e==5) my_printf("Fri.");
   else if(e==6) my_printf("Sat.");
   else if(e==0) my_printf("Sun.");
}
