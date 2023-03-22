#include <header.h>

int main_bench(void)
{
	int N,a[500],b[500];
	int i,j,j1,t;
	my_scanf("%d",&N);
	for(i=0;i<N;i++)
		my_scanf("%d",&a[i]);
	for(i=0,j=0;i<N;i++)
	{
		if(a[i]%2)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<j-1;i++)
		for(j1=0;j1<j-i-1;j1++)
			if(b[j1]>b[j1+1])
				t=b[j1],b[j1]=b[j1+1],b[j1+1]=t;
	for(i=0;i<j;i++)
	{
		my_printf("%d",b[i]);
	    if(i!=j-1)
			putchar(',');
	}
	putchar('\n');
	return 0;
}