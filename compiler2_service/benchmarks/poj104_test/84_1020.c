#define NUM_ITER 49274

#include <header.h>

int main_bench()
{
	int i,a,b,c,d;
	my_scanf("%d\n",&c);
	c=c-2;
	my_scanf("%d%d",&i,&b);
	while(c>0)
	{
           my_scanf("%d",&a);
		   if(a>=i&&b>=a)
		   {
              i=b;
			  b=a;
		   }
		   if(a<=i&&b<=a)
		   {
			   i=i;
			   b=a;
		   }
		   if(a<=i&&b>=i)
		   {
			   d=i;
			   i=b;
			   b=d;
		   }
		   if(a>=i&&b<=i)
		   {
			   d=i;
			   i=a;
			   b=d;
		   }
		   if(a>=b&&b>=i)
		   {
			   i=a;
			   b=b;
		   }
		   if(a<=b&&b<=i)
		   {
			   i=i;
			   b=b;
		   }
		   c--;
	}
	my_printf("%d\n",i);
	my_printf("%d\n",b);
	return 0;
}