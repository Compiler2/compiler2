#define NUM_ITER 55592

#include <header.h>

int main_bench()
{
	int n=0,m=0,a[300]={0},i=0;
	char b[300];
	do
	{
		my_scanf("%d%c",&a[i],&b[i]);
		i++;
	}while(b[i-1]==',');

	for(i=0;i<300;i++)
	{
		if(a[i]>m)m=a[i];
	}
	
	for(i=0;i<300;i++)
	{
		if(a[i]<m&&a[i]>n)n=a[i];
	}
	if(n!=0)my_printf("%d",n);
	else my_printf("No");
}

	
	