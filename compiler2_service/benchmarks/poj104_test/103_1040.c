#define NUM_ITER 1449689

#include <header.h>

int main_bench()
{
	int i,n=0,k;
	char bs[1000];
	my_scanf("%s",bs);
	int a[1000];
	char cs[1000];
	for(i=0;bs[i]!='\0';i++)
	{
		if(bs[i]>='a'&&bs[i]<='z')
		bs[i]=bs[i]-'a'+'A';
		a[i]=1;
	}
	cs[0]=bs[0];
	for(i=1;bs[i]!='\0';i++)
	{
		if(bs[i]==cs[n])
		{
		a[n]++;
		}
		else
		{
			n++;
			cs[n]=bs[i];
		}
	}
	for(i=0;i<=n;i++)
	{
		my_printf("(%c,%d)",cs[i],a[i]);
	}
}