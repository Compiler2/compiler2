#include <header.h>

int main_bench()
{
    int f(int a,int b);
	int m,n,i,p,q,j,x[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		my_scanf("%d",&x[i][j]);
	my_scanf("%d%d",&n,&m);
	p=f(m,n);
	if(p==0)
		my_printf("error\n");
	else
	{
		{
			for(i=0;i<5;i++)
			{
				q=x[m][i];
			    x[m][i]=x[n][i];
			    x[n][i]=q;
			}

		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==0) my_printf("%d",x[i][j]);
				else my_printf(" %d",x[i][j]);
			}
			my_printf("\n");
		}
	}
}
int f(int a,int b)
{
	if(a<5 && a>=0 && b<5 && b>=0)
		return 1;
	else return 0;
}

