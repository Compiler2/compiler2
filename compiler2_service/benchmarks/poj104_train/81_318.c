#define NUM_ITER 226768

#include <header.h>

void ox( int a[5][5], int m, int n)
{
	int i,j,t[5];
	
		if(m<=4&&m>=0&&n<=4&&n>=0)
		{
			for(i=0;i<=4;i++)
			{
				t[i]=a[m][i];
				a[m][i]=a[n][i];
				a[n][i]=t[i];
			}
				for(i=0;i<=4;i++)
		{
			for(j=0;j<=3;j++)
				my_printf("%d ",a[i][j]);
			my_printf("%d",a[i][4]);
                        my_printf("\n");
		}
		}
		else
			my_printf("error\n");
		
}
int main_bench()
{
	int m,n,i,j,a[5][5];
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&m,&n);
	ox(a,m,n);
}
	