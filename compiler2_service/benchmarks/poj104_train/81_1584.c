#include <header.h>

int f1(int n,int m)
{
	if(n>=0 && n<5 && m>=0 && m<5)
		return 1;
	else
		return 0;
}
int main_bench()
{
	int a[5][5],n,m,temp,i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&n,&m);
	if(f1(n,m)==0)
		my_printf("error");
	else
	{
		for(j=0;j<5;j++)
		{
			temp=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=temp;
		}
		for(i=0;i<5;i++)
			my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
	}
	return 0;
}

