#define NUM_ITER 215612

#include <header.h>

int f(int array[][5],int m,int n)
{	
	int temp,k;
	if(0<=m&&m<=4&&0<=n&&n<=4)
	{
		for(k=0;k<5;k++)
		{
			temp=*(*(array+m)+k);
			*(*(array+m)+k)=*(*(array+n)+k);
			*(*(array+n)+k)=temp;
		}
		return 1;
	}
	else
		return 0;
}

int main_bench()
{
	int m,n,i,j;
	int a[5][5];
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&m,&n);
	if (f(a,m,n)==1)
	{
		for(i=0;i<5;i++)
		{
			my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				my_printf(" %d",a[i][j]);
			}
			my_printf("\n");
		}
	}
	else if(f(a,m,n)==0)
		my_printf("error");
}