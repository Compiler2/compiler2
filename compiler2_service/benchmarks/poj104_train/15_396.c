#include <header.h>

int main_bench()
{
	int i,a,b=0,c=0,d=0,n;
	my_scanf("%d",&n);
	for(i=1;i<=n*n;i++)
	{
		my_scanf("%d",&a);
		if(a==0){
			b++;
			c++;
			d=b>d?b:d;
		}
		if(a==255)b=0;
	}
	b=(c-2*d)/2;
	my_printf("%d",b*(d-2));
         return 0;
}
