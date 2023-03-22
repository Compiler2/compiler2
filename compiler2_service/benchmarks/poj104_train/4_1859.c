#define NUM_ITER 461

#include <header.h>


int main_bench()
{
	int m,n,i,j,k;
	int *a[100];
	my_scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		*(a+i)=(int*)malloc(n*sizeof(int));
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",*(a+i)+j);
	for(k=0;k<n;k++)
	{
		i=0;j=k;
		do
		{
			my_printf("%d\n",*(*(a+i)+j));
			i++;j--;
		}while(j>=0&&i<m);
	}
	if(m>=2)
	{
		for(k=1;k<m;k++)
		{
			i=k;j=n-1;
			do
			{
			    my_printf("%d\n",*(*(a+i)+j));
			    i++;j--;
			}while(j>=0&&i<m);
		}
	}
	return 0;
}