#include <header.h>

int main_bench()
{
  int n;
  my_scanf("%d",&n);
  if(n==1) my_printf("End");
  else {for(;;)
  {if(n%2==0) {n=n/2;my_printf("%d/2=%d\n",2*n,n);if(n==1) {my_printf("End\n");break;}}
  else {n=n*3+1;my_printf("%d*3+1=%d\n",(n-1)/3,n);{if(n==1) {my_printf("End\n");break;}}
  }}
}
}

