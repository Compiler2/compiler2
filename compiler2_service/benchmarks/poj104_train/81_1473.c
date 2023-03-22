#include <header.h>

int main_bench()
{
	int a[5][5],i,j,n,m;
	int f(int n,int m);
	int b[5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&n,&m);
	if(f(n,m)==0)
		my_printf("error\n");
	if(f(n,m)==1)
	{
		for(i=0;i<5;i++)
		{
			b[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=b[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				my_printf("%d",a[i][j]);
                                    if(j==4)
                                       break;
                                    my_printf(" ");

			}
			my_printf("\n");
		}
	}
	return 0;
}
int f(int n,int m)
{
	int z;
	if(n>=0&&n<5&&m>=0&&m<5)
		z=1;
	else 
		z=0;
	return (z);
}
