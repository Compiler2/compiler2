#define NUM_ITER 117911

#include <header.h>

int main_bench()
{
	int i,j,n,t,sub,a[10000];
	char str[10000],c;
	str[0]='.';
	for(i=0,j=1;(c=str[j-1])!='\n';i++,j++)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&str[j]);
	}
	n=i;
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i+1];
				a[i+1]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=n-2,j=0;i>=0;i--)
	{
		if(a[i]<a[i+1])
		{
			sub=a[i];
			break;
		}
		else
		{
			j++;
		}
	}
	if(j==n-1)
	{
		my_printf("No\n");
	}
	else
	{
		my_printf("%d\n",sub);
	}
}