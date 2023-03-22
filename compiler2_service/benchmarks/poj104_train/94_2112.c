#define NUM_ITER 16584

#include <header.h>

int main_bench()
{
	int N,a[500],b[500],i,j,k,temp,m,n,s;
	my_scanf("%d\n",&N);
	for(i=0;i<N;i++)
	{
		if(i==0)
			my_scanf("%d",&a[i]);
		else
			my_scanf(" %d",&a[i]);
	}
	for(j=0,k=0;j<N;j++)
	{
		if(a[j]%2==1)
		{
			b[k]=a[j];
			k++;
		}
	}
	for(m=1,temp=0;m<k-1;m++)
	{
		for(n=0;n<k-m;n++)
		{
			if(b[n]>b[n+1])
			{
				temp=b[n+1];
				b[n+1]=b[n];
				b[n]=temp;
			}
		}
	}
	for(s=0;s<k;s++)
	{
		if(s==0)
			my_printf("%d",b[s]);
		else
			my_printf(",%d",b[s]);
	}
	return 0;
}



