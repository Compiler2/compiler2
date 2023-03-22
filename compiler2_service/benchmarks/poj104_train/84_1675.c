#define NUM_ITER 5763

#include <header.h>

int main_bench(){
   int num[100],n,i,j,t;
   my_scanf("%d\n",&n);
   for(i=0;i<n-1;i++)
    {
      my_scanf("%d\n",&num[i]);
     }
    my_scanf("%d",&num[n-1]);
   for(j=0;j<n;j++)
    {
       for(i=0;i<n-j-1;i++)
      { 
         if(num[i]>num[i+1])
          {
             t=num[i];num[i]=num[i+1];num[i+1]=t;
           }
	   }
   }
     my_printf("%d\n%d",num[n-1],num[n-2]);
       return 0;
}