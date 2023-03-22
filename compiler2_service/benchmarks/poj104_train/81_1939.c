#define NUM_ITER 232609

#include <header.h>

void function(int num[5][5],int n,int m)
{
	int i,j;
if((n<5&&n>=0)&&(m<5&&n>=0))
{
for(i=0;i<=4;i++)
{
	if(i==n)	
	{
		for(j=0;j<=3;j++)
		my_printf("%d ",num[m][j]);
		my_printf("%d\n",num[m][4]);
	}
	else if(i==m)	
	{
		for(j=0;j<=3;j++)
		my_printf("%d ",num[n][j]);
		my_printf("%d\n",num[n][4]);
	}
	else 
	{
		for(j=0;j<=3;j++)
		my_printf("%d ",num[i][j]);
		my_printf("%d\n",num[i][4]);
	}
}
}
else my_printf("error\n");
}
int main_bench()
{
	int num[5][5]={0};
	int n,m,i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
			my_scanf("%d",&num[i][j]);
	}
	my_scanf("%d %d",&n,&m);
	function(num,n,m);
}