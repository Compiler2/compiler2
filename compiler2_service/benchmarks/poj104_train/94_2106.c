#define NUM_ITER 10752

#include <header.h>

int main_bench()
{
	int N,i,j=0,k,dot=0,min=29999,l;
	int a[500],b[500];
	my_scanf("%d",&N);
	for(i=0;i<N;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		if(a[i]%2==0)
			continue;
		else
		{
			b[j]=a[i];
			j++;
		}
	}
	for(k=0;k<j;k++)
	{
		for(i=0;i<j;i++)
		{
			if(b[i]<min)
			{
				min=b[i];
			}
			else
				continue;
		}
		if(dot!=0)
			my_printf(",");
		my_printf("%d",min);
		dot++;
		for(l=0;l<j;l++)
		{
			if(b[l]==min)
			{
				b[l]=29999;
				break;
			}
		}
		min=29999;
	}
	my_printf("\n");
	return 0;
}
