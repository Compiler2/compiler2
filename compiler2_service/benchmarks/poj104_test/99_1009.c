#define NUM_ITER 56997

#include <header.h>


int main_bench()
{
   int n,i;
   double a,b,c,d;
   my_scanf("%d\n",&n);
   i=1;
   a=0;
   b=0;
   c=0;
   d=0;
   while(i<=n){
	   int e;
	   my_scanf("%d",&e);
       if(e<=18){
		   a++;
	   }else if(e>=19&&e<=35){
		   b++;
	   }else if(e>=36&&e<=60){
		   c++;
	   }else{
		   d++;
	   }
	   i++;
   }
   my_printf("1-18: %.2lf%%\n",a*100/(a+b+c+d));
   my_printf("19-35: %.2lf%%\n",b*100/(a+b+c+d));
   my_printf("36-60: %.2lf%%\n",c*100/(a+b+c+d));
   my_printf("60??: %.2lf%%\n",d*100/(a+b+c+d));
   return 0;
}