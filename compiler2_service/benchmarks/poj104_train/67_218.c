#define NUM_ITER 29134

#include <header.h>


int main_bench()
{
int n,i,sum,x;
int a[100],b[100];

   my_scanf ("%d",&n);

   my_scanf ("%d%d",&sum,&x);

   for (i=0;i<n-1;i++){
   
      my_scanf("%d%d",&a[i],&b[i]);

	  if ((x*0.1*10/sum-b[i]*0.1*10/a[i])>0.05){
	  
	  my_printf ("worse\n");}
	  
	  else if  ((b[i]*0.1*10/a[i]-x*0.1*10/sum)>0.05){
	  
	  my_printf ("better\n");}

	  else {my_printf ("same\n");}
   
   
   }

return 0;
}