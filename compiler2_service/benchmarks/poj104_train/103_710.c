#define NUM_ITER 35634

#include <header.h>

int main_bench()
{
	char w[1001];
	int a[1001],i,j;
	for(i=0;i<=1000;i++)
	{
		a[i]=1;
	}
	gets(w);
	for(i=0;w[i]!='\0';i++)
	{
		if(w[i]>=96)
		{
			w[i]=w[i]-32;
		}
	}
	for(i=1,j=1;;i++)
	{
		if(w[i-1]=='\0')
			break;
		if(w[i]==w[i-1])
		{
			a[j]=a[j]+1;
		}
		else
		{
			my_printf("(%c,%d)",w[i-1],a[j]);
			j=j+1;
		}
	}
	my_printf("\n");
	return 0;
}
