#define NUM_ITER 1207602

#include <header.h>

int main_bench()
{
   int n,yibai=0,wushi=0,ershi=0,yishi=0,wu=0,yi=0;
   my_scanf("%d",&n);
   int a,b;
      a=n%10;
	  b=(n/10)%10;
   
	  if(a<5){
	  yi=a;
	  wu=0;
	  }
      else{
	   yi=a-5;
	   wu=1;
   }
   
      if(b<5){
	   ershi=b/2;
	   yishi=b%2;
	   wushi=0;
   }
       else {
	   wushi=1;
	   ershi=(b-5)/2;
	   yishi=(b-5)%2;
   }
   yibai=n/100;
   my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",yibai,wushi,ershi,yishi,wu,yi);
	 return 0;
}