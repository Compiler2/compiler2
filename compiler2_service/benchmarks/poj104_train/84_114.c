#define NUM_ITER 45197

#include <header.h>

int main_bench()
{
   int input[100]={0},i=0,j=0,n=0,t=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++) my_scanf("%d",&input[i]);


   for(i=1;i<n;i++)
   {
      if(input[i]<input[i-1])
      {
	 t=input[i];
	 input[i]=input[i-1];
	 input[i-1]=t;
      }
   }
   my_printf("%d\n",input[n-1]);
   input[j]=0;

   for(i=1;i<n-1;i++)
   {
      if(input[i]<input[i-1])
      {
	 t=input[i];
	 input[i]=input[i-1];
	 input[i-1]=t;
      }
   }
   my_printf("%d\n",input[n-2]);
}