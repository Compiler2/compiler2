#define NUM_ITER 59733

#include <header.h>


int main_bench()
{
  int n,i,a;
  int max=0,min=0,temp=0;
  
  my_scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    my_scanf("%d",&a);
    if(i<=1)
    { 
           
      max=max>a?max:a;
      
     }
    if(max<a&&i>1)
    {
     min=max;
     max=a;
    }
    if(max>a&&min<a&&i>1)
    min=a;
    
   }
   my_printf("%d\n%d",max,min);
  
   return 0;
}