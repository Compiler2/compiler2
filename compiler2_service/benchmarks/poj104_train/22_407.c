#include <header.h>

int main_bench()
{
	int a=-1,b=-1,i,n;
	int c[300];
	char x;
	for(i=0;i<300;i++)
	{
		my_scanf("%d%c",&c[i],&x);
		if(x!=',')
		{
			n=i;
			break;
		}
	}
	for(i=0;i<=n;i++)
	{
		if(c[i]>a)a=c[i];
	}
	for(i=0;i<=n;i++)
		if(c[i]<a&&c[i]>b)b=c[i];
	if(b==-1)my_printf("No\n");
	else my_printf("%d\n",b);

	
}