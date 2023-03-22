#include <header.h>

main_bench()
{
  int n,m,k;
  int i;
  n>0;
  my_scanf("%d",&n);      
for(;;i++)
{ 
  if(n==1)  my_printf("End");
  else if(n%2==0)
    {
       m=n/2;
       my_printf("%d/2=%d\n",n,m); 
       n=m;
       continue;       
    }
  else  
    {
        m=n*3+1;
        my_printf("%d*3+1=%d\n",n,m);
        n=m;
        continue;       
    }
    break;    
}          
}