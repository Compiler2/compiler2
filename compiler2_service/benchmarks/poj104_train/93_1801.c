#define NUM_ITER 1566213

#include <header.h>

int main_bench()
{ int a,b,i=0,j=0,k=0,m,n;
  my_scanf("%d",&m);
  if(m%3==0)
	  i=1;
  if(m%5==0)
	  j=1;
  if(m%7==0)
	  k=1;
  if(i==1&&j==1&k==1)
	  my_printf("3 5 7");
  else if(i==1&&j==1&&k==0)
	  my_printf("3 5");
  else if(i==1&&j==0&&k==1)
	  my_printf("3 7");
  else if(i==0&&j==1&&k==1)
	  my_printf("5 7");
  else if(i==1&&j==0&&k==0)
	  my_printf("3");
  else if(i==0&&j==1&&k==0)
	  my_printf("5");
  else if(i==0&&j==0&&k==1)
	  my_printf("7");
  else if(i==0&&j==0&&k==0)
	  my_printf("n");


}