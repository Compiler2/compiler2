#define NUM_ITER 1025310

#include <header.h>

int main_bench()
{
	char a[1000];
	int num[300]={0},j=0,x;
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]!=' '&&i!=len-1)
		{
			num[j]++;
		}
		else if(a[i]==' '&&i!=len-1)
		{
			j++;
		}
		else if(i=len-1)
		{
			x=j;
		}

	}
	for(j=0;j<x;j++)
	{
		if(num[j]!=0)
		{
		    my_printf("%d,",num[j]);
		}
	}
	my_printf("%d",num[x]+1);
	return 0;
}