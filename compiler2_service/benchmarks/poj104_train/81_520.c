#define NUM_ITER 228739

#include <header.h>

int main_bench()
{
	int exchange(int a[5][5],int n,int m);
	int a[5][5],n,m;
	int i,j;
	int y;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&n,&m);
	y=exchange(a,n,m);
	if(y==0)
		my_printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				my_printf("%d",a[i][j]);
				if(j!=4)
					my_printf(" ");
			}
			my_printf("\n");
		}
	}


	return 0;
}


int exchange(int a[5][5],int n,int m)
{
	int z,k,i,j;
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		for(j=0;j<5;j++)
		{
			k=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=k;
		}
		z=1;
	}
	else
		z=0;
	return z;
}
		