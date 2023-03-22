#include <header.h>

int main_bench()
{
	int n,i,a,b,c;
	my_scanf("%d",&n);
	my_scanf("%d %d",&a,&b);
	if(b>a)
			c=b,b=a,a=c;
	for(i=1;i<=(n-2);i++)
	{
	    my_scanf("%d",&c);
		if(c>a) b=a,a=c;
		else if(c>b) b=c;
	}
	my_printf("%d\n%d\n",a,b);	
}