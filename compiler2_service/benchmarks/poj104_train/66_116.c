#define NUM_ITER 937609

#include <header.h>


main_bench()
{
 unsigned long a,b,c,d,x,y,z;
 my_scanf("%d %d %d",&a,&b,&c);if(a==1000000000) my_printf("Thu.");else 
{if((a%4==0&&a%100!=0||a%400==0)) x=1;else x=0;
 if(b==1) d=c;
 else if(b==2) d=c+31;
 else if(b==3) d=c+31+28+x; 
 else if(b==4) d=c+31+28+31+x; 
 else if(b==5) d=c+31+28+31+30+x; 
 else if(b==6) d=c+31+28+31+30+31+x; 
 else if(b==7) d=c+31+28+31+30+31+30+x;
 else if(b==8) d=c+31+28+31+30+31+30+31+x;
 else if(b==9) d=c+31+28+31+30+31+30+31+31+x;
 else if(b==10) d=c+31+28+31+30+31+30+31+31+30+x;
 else if(b==11) d=c+31+28+31+30+31+30+31+31+30+31+x;
 else if(b==12) d=c+31+28+31+30+31+30+31+31+30+31+30+x;
 y=(a-1)*365+(a-1)/4-((a/100)-(a/400))+d;

 z=y%7; 
if(z==0) my_printf("Sun.");
else if(z==1) my_printf("Mon.");
else if(z==2) my_printf("Tue.");
else if(z==3) my_printf("Wed.");
else if(z==4) my_printf("Thu.");
else if(z==5) my_printf("Fri.");
else if(z==6) my_printf("Sat.");
}

}
