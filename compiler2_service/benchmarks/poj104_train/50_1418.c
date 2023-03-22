#define NUM_ITER 635254

#include <header.h>

int main_bench()
{
   int w,n;
   my_scanf("%d",&w);
   int i=1,x=0;
   while(i<=12){
     if(i==1){
       n=(12%7+w)%7;
     }else if(i==2||i==4||i==6||i==8||i==9||i==11){
       x=x+31;
       n=((12+x)%7+w)%7;
     }else if(i==3){
       x=x+28;
       n=((12+x)%7+w)%7;
     }else{
       x=x+30;
       n=((12+x)%7+w)%7;
     }
     if(n==5){
       my_printf("%d\n",i);
     }
     i++;
   }
   return 0;
}
