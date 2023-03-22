#define NUM_ITER 919658

#include <header.h>

int main_bench()
{
	int m,n,a,b,c;
	my_scanf("%d",&n);
	
	for(m=1;m<13;m++)
	{
	  a=5-n;
	  b=1+a;
	  c=(13-b)%7;
	  if(c==0)
	  {
		  my_printf("%d\n",m);
	  }
	  if(m==1||m==3||m==5||m==7||m==8||m==10)
	  {
		  n=n+3;
	  }
	  if(m==4||m==6||m==9||m==11)
	  {
		  n=n+2;
	  }
	  if(m==2)
	  {
		  n=n;
	  }
	}


	return 0;
}