#define NUM_ITER 18168

#include <header.h>

int main_bench()
{
	int i,n,j,k,m=0,h=0;
	my_scanf("%d",&n);
	int *sushu=(int *)malloc(sizeof(int) * n);
	for(i=3;i<=n;i++)
	{
		k=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==1)
		{continue;}
		sushu[m]=i;
		m++;
	}
	for(i=0;i<m-1;i++)
	{
		if(sushu[i+1]-sushu[i]==2)
		{
			my_printf("%d %d\n",sushu[i],sushu[i+1]);h=1;
		}
	}
	if(h==0)
{
my_printf("empty\n");
}

	return 0;
}