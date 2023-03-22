#define NUM_ITER 1115537

#include <header.h>

char c[10000];
int main_bench()
{
	char a[301]={0};
	int k=0,i,r;
	gets(c);
	r=strlen(c);
	for(i=0;i<r-1;i++)
	{
		if((c[i]!=' ')&&(c[i+1]!=' '))
		{
			a[k]++;
		}
		if((c[i]!=' ')&&(c[i+1]==' '))
		{
			a[k]++;
			k++;
		}
	}
	if(c[r-1]!=' ')
	{
		a[k]++;
		k++;
	}
		for(i=0;i<k-1;i++)
			my_printf("%d,",a[i]);
		my_printf("%d\n",a[k-1]);
}



