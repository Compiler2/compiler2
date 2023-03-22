#include <header.h>


int f(int a[][5],int m,int n)
{
	int k,i;
	if(m<5&&m>=0&&n<5&&n>=0)
	{for(i=0;i<5;i++)
		{k=a[m][i];
		a[m][i]=a[n][i];
		a[n][i]=k;
		}
	return 1;
	}
	else return 0;
}

int main_bench()
{
	int i,j,m,n,k;
	int a[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		my_scanf("%d",&a[i][j]);
		
	my_scanf("%d%d",&m,&n);
    k=f(a,m,n);
	if(k==1)
		for(i=0;i<5;i++)
		{for(j=0;j<4;j++)
		my_printf("%d ",a[i][j]);
		my_printf("%d\n",a[i][4]);
		}
	
	else my_printf("error\n");
}

