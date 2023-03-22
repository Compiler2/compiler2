#define NUM_ITER 53320

#include <header.h>

int main_bench(){
   int pp[100];
   int i,n,a=0,b=0,c=0,d=0,sum;
   double e,f,g,j;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
   my_scanf("%d",&pp[i]);
   if(pp[i]<19){a++;}
   else if(pp[i]>=19&&pp[i]<=35){b++;}
   else if(pp[i]>=36&&pp[i]<=60){c++;}
   else if(pp[i]>=61){d++;}

 }
    sum=a+b+c+d;
    e=1.0*(100000*a/sum);
    f=1.0*(100000*b/sum);
    g=1.0*(100000*c/sum);
    j=1.0*(100000*d/sum);
    my_printf("1-18: %.2lf%%\n",e/1000);
    my_printf("19-35: %.2lf%%\n",f/1000);
    my_printf("36-60: %.2lf%%\n",g/1000);
    my_printf("60??: %.2lf%%\n",j/1000);
		return 0;
}