#define NUM_ITER 16029

#include <header.h>

int main_bench()
{
	int a[500],b[500],i,r=0,p,N,m=0,temp;
	my_scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		my_scanf("%d",&a[i]);
		p=a[i]%2;
		if(p==1)
		{
			b[r]=a[i];
			r++;
		}
	}
	for(m=1;m<r;m++)
		for(i=0;i<r-m;i++)
		{
			if(b[i]>b[i+1])
			{
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
		}
	my_printf("%d",b[0]);
	for(i=1;i<r;i++)
		my_printf(",%d",b[i]);
	my_printf("\n");
	return 0;
}