#include <header.h>

int f(int n,int m,int (*p)[5])
{
	int t,i;
	if(0<=m&&m<5&&0<=n&&n<5)
	{
		for(i=0;i<5;i++)
		{
			t=*(*(p+m)+i);
			*(*(p+m)+i)=*(*(p+n)+i);
			*(*(p+n)+i)=t;
		}
		return 1;
	}
	else return 0;
}
int main_bench()
{
	int a[5][5];
	int i,j,flag,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",*(a+i)+j);
	my_scanf("%d %d",&n,&m);
	flag=f(n,m,a);
	if(flag==0)
		my_printf("error\n");
	else
	{
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				my_printf("%d",a[i][j]);
				if(j==4) my_printf("\n");
				else my_printf(" ");
			}
	}
	return 0;
}