#include <header.h>

int main_bench()
{
  int n;
  int func(int n);
  my_scanf("%d",&n);
  while(n!=1)
  {
    n=func(n);
  }
  my_printf("End\n");
}
int func(int n)
{
  if(n%2==1)
  {
     my_printf("%d*3+1=%d\n",n,3*n+1); 
	 n=3*n+1;
  }
  else
  {
	  my_printf("%d/2=%d\n",n,n/2);
	  n=n/2;
  }
  return(n);
}