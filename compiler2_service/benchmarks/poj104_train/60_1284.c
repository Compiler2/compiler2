#define NUM_ITER 3631

#include <header.h>



int main_bench()
{
  int n,i,a,b=0,c,d=0,e=0;
  my_scanf("%d",&n);

  for (i=5;i<=n;i++)
  {
      
  for (a=2;a<i;a++)
          {
          if (i%a==0) 
          b++;
          }
  if (b==0)
       {
           
          for (c=2;c<(i-2);c++)
          {
          if  ((i-2)%c==0)
          d++;
          }
      
        
           
       
          if (d==0)  
          {
          e++;
          my_printf("%d %d\n",i-2,i);
           }
       }
    b=0;
    d=0;    
  }
 if (e==0)
 my_printf("empty\n");
 
 return 0;
        
    }
