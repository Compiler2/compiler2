#include <header.h>

int main_bench()
{
	int a[300]={-1},n,i,first,second;
	my_scanf("%d",&a[0]);
	for(i=1;i<300;i++)
		my_scanf(",%d",&a[i]);
	n=0;
	for(i=0;i<300;i++)
		if(a[i]!=-1) n++;
	first=0;second=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>first)
			first=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<first&&a[i]>=second)
			second=a[i];
	}
	if(second==0) my_printf("No\n");
	else my_printf("%d\n",second);
}
