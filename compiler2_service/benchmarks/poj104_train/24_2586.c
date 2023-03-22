#define NUM_ITER 35004

#include <header.h>

int main_bench()
{
	int b,c,n,i;
	char d[200],e[232],f[232];
	int max=0,min=100;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",d);
		b=strlen(d);
		if(b>max)
		{
			max=b;
			strcpy(e,d);
		}
		if(b<min)
		{
			min=b;
			strcpy(f,d);
		}
	}
	my_printf("%s\n",e);
	my_printf("%s\n",f);
	return 0;
}