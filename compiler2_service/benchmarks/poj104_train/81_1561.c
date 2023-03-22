#include <header.h>

int A(int m,int n)
{
	int a;
	if(0<=m&&m<=4&&0<=n&&n<=4)
		a=1;
	else a=0;
	return(a);
}
int main_bench()
{
	int m,n,i,j,f[5][5],b[5];
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			my_scanf("%d",&f[i][j]);
		my_scanf("%d %d",&m,&n);
		if(A(m,n)==1)
		{
			if(m!=n)
			{
				for(j=0;j<=4;j++)
				{
					b[j]=f[m][j];f[m][j]=f[n][j];f[n][j]=b[j];
				}
			}
			for(i=0;i<=4;i++)
			{
				for(j=0;j<=3;j++)
					my_printf("%d ",f[i][j]);
				my_printf("%d\n",f[i][4]);
			}
		}
		else my_printf("error");
}


