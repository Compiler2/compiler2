#define NUM_ITER 1424531

#include <header.h>

int main_bench()
{
	long int a[300];
	char c[300];
	int i,num,max,imax,t=0;
	my_scanf("%d",&a[0]);
	my_scanf("%c",&c[0]);
	for(i=1;c[i-1]==',';i++)
		my_scanf("%d%c",&a[i],&c[i]);
	num=i;
	if(num==1)
		my_printf("No\n");
	else
	{
		max=a[0];
	for(i=0;i<num;i++)
		if(a[i]>max)
			max=a[i];
	imax=0;
	for(i=0;i<num;i++)
		if(a[i]>imax&&a[i]<max)
		{
			imax=a[i];
			t=1;
		}
		if(t==1)
		my_printf("%d",imax);
		else
			my_printf("No\n");
	}

}