#define NUM_ITER 216446

#include <header.h>

int f(int x,int y)
{
	int z;
	if((x>=0&&x<5)&&(y>=0&&y<5))
		z=1;
	else
		z=0;
	return(z);
}

int main_bench()
{
	int a[5][5],m,n,i,j,t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d%d",&n,&m);
	t=f(n,m);
	if(t==0)
		my_printf("error");
	if(t==1)
	{for(i=0;i<5;i++)
		{t=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=t;}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			my_printf("%d ",a[i][j]);
			my_printf("%d",a[i][4]);
			my_printf("\n");
	}}
}