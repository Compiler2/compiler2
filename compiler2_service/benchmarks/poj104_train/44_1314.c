#define NUM_ITER 519782

#include <header.h>

int RevNum(int n)
{   int s=0;
    if(n>=0)
    {
     while(n/10!=0)
     {
      s=n%10;
      n=n/10;
      my_printf("%d",s);
     }
     my_printf("%d\n",n);
    }       
    else
    {
     n=abs(n);
     my_printf("-");
     while(n/10!=0)
     {
      s=n%10;
      n=n/10;
      my_printf("%d",s);
     }
     my_printf("%d\n",n);
    }        
}
main_bench()
{ int i=0;
  int k;
  while(i<6)
  { 
  my_scanf("%d",&k);
  while(k%10==0)
   {
    k=k/10;
   }
  RevNum(k);
  i++;
  }  
  
}
