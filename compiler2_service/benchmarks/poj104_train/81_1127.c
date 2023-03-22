#define NUM_ITER 221044

#include <header.h>

void prt(int *a)
{	int i;
	for(i=0;i<5;i++)
		my_printf("%d%c",*(a+i),(i<4)?' ':'\n');
}
int main_bench()
{
	int i,n,m,a[5][5],j;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	my_scanf("%d %d",&m,&n);

	if(0<=m&&m<=4&&0<=n&&n<=4)
	{	for(i=0;i<5;i++)
		{	if(i==m)prt(a[n]);
			else if(i==n)prt(a[m]);
			else prt(a[i]);
		}

	}
	else my_printf("error");
}
	

