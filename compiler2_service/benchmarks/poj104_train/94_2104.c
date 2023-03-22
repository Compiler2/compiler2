#define NUM_ITER 16577

#include <header.h>

int main_bench()
{
   int x[500],i,j,n,t,k,y;
   my_scanf("%d",&n);
   for(k=0,i=0;i<n;i++)
   {
      my_scanf("%d",&t); 
      if(t%2==1)
      {x[k]=t;k++;}               
   }    
   k=k-1;
   for(i=0;i<k;i++)
   {
      for(j=0;j<k-i;j++)
      {
         if(x[j+1]<x[j])
         {
            y=x[j+1];
            x[j+1]=x[j];
            x[j]=y;               
         }                
      }                
   }
   my_printf("%d",x[0]);
   for(i=1;i<=k;i++)
   {
      my_printf(",%d",x[i]); 
   }
   my_scanf("%d",&n);
   return 0;
}
