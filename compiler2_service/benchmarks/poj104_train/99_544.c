#define NUM_ITER 1095154

#include <header.h>

int main_bench()
{
   int i,j,a,b,c,d;
   a=0;b=0;c=0;d=0;
   double x,y,z,w,n;
   int tt[10000];
   my_scanf("%lf",&n);
   for(i=0;i<n;i++)
   {
	   my_scanf("%d",&tt[i]);
	    if(tt[i]<=18) a++;
	    else if(tt[i]<=35) b++;
		     else if(tt[i]<=60) c++; 
		          else d++;
   }
   x=(a*100)/n;
   y=(b*100)/n;
   z=(c*100)/n;
   w=(d*100)/n;
   
   my_printf("1-18: %.2lf%%\n",x);
   my_printf("19-35: %.2lf%%\n",y);
   my_printf("36-60: %.2lf%%\n",z);
   my_printf("60??: %.2lf%%\n",w);
   

}