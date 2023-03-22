#define NUM_ITER 1062530

#include <header.h>


int main_bench() 
{ 
   int x,a,b,c,d,e,m=0;
   my_scanf("%d",&x);
   a=x%10;m=10*m+a;
   b=(x/10)%10;m=10*m+b;
   c=(x/100)%10;m=10*m+c;
   d=(x/1000)%10;m=10*m+d;
   e=(x/10000)%10;m=10*m+e;
   if(e==0) m=m/10;
   else m=m;
   if(e==0,d==0) m=m/10;
   else m=m;
   if(e==0,d==0,c==0) m=m/10;
   else m=m;
   if(e==0,d==0,c==0,b==0) m=m/10;
   else m=m;my_printf("%d",m);
}
