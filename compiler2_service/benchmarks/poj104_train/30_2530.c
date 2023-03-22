#define NUM_ITER 48164

#include <header.h>


int main_bench()
{
  int n,i,j,t,sum=0,flag=0;
  
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      t=i;   
     for(j=1;j<=2;j++)
        {
         if(i%10==7)
           {
             flag=1;       
             break;
            } 
          else
           i=i/10;
       }
       i=t;    
      if(i%7!=0 && flag!=1)
        {
          sum=sum+i*i;
        }  
      flag=0;  
    }      
  my_printf("%d",sum);

  return 0;
}
