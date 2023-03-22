#define NUM_ITER 8139

#include <header.h>

int main_bench()
{
   int x[300],y[300]={0},i,j,k=0,n,sign;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      my_scanf("%d",&x[i]);                
   }
   for(i=0;i<n;i++)
   {
      for(sign=0,j=0;j<i;j++)
      {
         if(x[i]==x[j])
         {
            sign=1; 
            break;       
         }               
      }  
      if(sign==0)
      {
            y[k]=x[i];
            k++;  
      }
                
   }
   my_printf("%d",y[0]);
   for(i=1;i<k;i++)
   {
      my_printf(",%d",y[i]);                
   }    
   my_scanf("%d",&n);
   return 0;
}
