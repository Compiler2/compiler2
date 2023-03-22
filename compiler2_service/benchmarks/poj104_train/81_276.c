#define NUM_ITER 233363

#include <header.h>

int main_bench()
{
	int a[5][5],i,j,p,n,m;
	int matrix(int b[5][5],int e,int f);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	p=matrix(a,n,m);
	if(p==1)
	{
		for(i=0;i<5;i++)
		{
			j=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=j;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				my_printf("%d",a[i][j]);
				if(j!=4)
					my_printf(" ");
				else
					my_printf("\n");
			}
		}
	}
	else
		my_printf("error");
}

int matrix(int b[5][5],int e,int g)
{
	int f;
	if(e<5&&g<5)
		f=1;
	else
		f=0;
	return(f);
}