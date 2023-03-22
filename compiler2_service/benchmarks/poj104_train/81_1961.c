#define NUM_ITER 232277

#include <header.h>

int a[5][5],b[5];
int f(int n,int m)
{
	int i,j,k;
	if(m>=5||n>=5)
		return 0;
	else
	{
		for(i=0;i<5;i++)
		{
			b[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=b[i];
		}
		return 1;
	}
}




int main_bench()
{
    int m,n;
	int i,j,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&n,&m);
	if(f(n,m)==0)
		my_printf("error\n");
	else
		for(i=0;i<5;i++)
		{	for(j=0;j<4;j++)
			{
				my_printf("%d ",a[i][j]);
			}
			my_printf("%d\n",a[i][4]);
		}
			
	return 0;
}
