#include <header.h>

int num(int a,int b)
{
	int p;
	if(a<=4&&b<=4)
		p=1;
	else
		p=0;
	return(p);
}
int main_bench()
{
	int num(int a,int b);
	int a[5][5];
	int i,j,m,n,c,d=0,t=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&m,&n);
	c=num(m,n);
	if(c==0)
		my_printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			t=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=t;
		}
		for(i=0;i<5;i++)
		    for(j=0;j<5;j++)
			{
				if(j%5-4!=0)
					my_printf("%d ",a[i][j]);
				else
					my_printf("%d",a[i][j]);
				d=d+1;
				if(d%5==0)
					my_printf("\n");
			}
	}
}
	