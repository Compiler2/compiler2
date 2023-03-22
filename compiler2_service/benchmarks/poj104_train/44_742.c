#include <header.h>

int reverse(int n)
{
	int c,a,b=0;
	c=n;
	if(n>=0)
	{
		while(c>0)
		{
			a=c%10;
			c=c/10;
            b=10*b+a;
		}
	}
	if(n==0)
		b=0;
	if(n<0)
	{
		b=-reverse(-n);
	}
	return(b);
}
  int main_bench()
  {
	  int i,c;
	  for(i=1;i<=6;i++)
	  {
		  my_scanf("%d",&c);
	      my_printf("%d\n",reverse(c));
	  }
  return 0;
  }