#define NUM_ITER 365548

#include <header.h>

int main_bench()
{
	int a[300]={0},n=0,i,max=0;
	char c;
	while((c=getchar())!='\n')
	{
		if(c!=',')
			a[n]=a[n]*10+c-'0';
		else
			n++;
	}
	for(i=0;i<=n;i++)
		max=max>a[i]?max:a[i];
	for(i=0;i<=n;i++)
	{
		if(a[i]==max)
			a[i]=0;
	}
	max=0;
	for(i=0;i<=n;i++)
		max=max>a[i]?max:a[i];
	if((n==0)||(max==0))
		my_printf("No\n");
	else
		my_printf("%d\n",max);
}