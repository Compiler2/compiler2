#include <header.h>


int main_bench()
{
   int n,k,x[1000];
   int i,j,sign=0;
   
   my_scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
      my_scanf("%d",&x[i]);                
   }    
   
   for(i=0;i<n;i++)
   {
       
       for(j=i+1;j<n;j++)
       {
           if((x[i]+x[j])==k)
           {
               sign=1;
               break;                  
           }                  
       }
                     
   }
   
   if(sign==1)
       my_printf("yes");
   else
       my_printf("no");
       
    my_scanf("%d%d",&n,&k);   
   return 0;
}
