#define NUM_ITER 1363830

#include <header.h>

int main_bench()
{
	int i,num=0,n;
	char a[20000];
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')num++;
		else if(a[i]==' '&&num!=0)
		{my_printf("%d",num);if(i!=n-1)my_printf(",");num=0;}
		if(i==n-1)my_printf("%d",num);
	}
}