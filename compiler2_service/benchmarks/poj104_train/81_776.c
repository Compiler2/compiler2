#define NUM_ITER 214195

#include <header.h>

int n,m;
int a[5][5];
void swap()
{
	int tmp=0,i;
	for(i=1;i<=5;i++)
	{
	tmp=a[n][i-1];
	a[n][i-1]=a[m][i-1];
	a[m][i-1]=tmp;
	}
}
int main_bench()
{
	int i,j;
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			my_scanf("%d",&a[i-1][j-1]);
		my_scanf("%d%d",&n,&m);
		if(n>=0&&n<=4&&m>=0&&m<=4) swap();
		else 
		{my_printf("error");
		return 0;
		}
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			if(j!=5)
			my_printf("%d ",a[i-1][j-1]);
			else 	my_printf("%d\n",a[i-1][j-1]);

	return 0;
}