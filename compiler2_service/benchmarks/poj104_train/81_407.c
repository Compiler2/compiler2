#define NUM_ITER 222464

#include <header.h>

int mn(int n,int m)
{
	if(n>=0&&n<=4&&m>=0&&m<=4)
		return 1;
	else
		return 0;
}
int main_bench()
{
	int a,n,m,i,j,(*p)[5],b[5][5];
	for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
		   my_scanf("%d",&b[i][j]);
	my_scanf("%d %d",&n,&m);
	a=mn(n,m);
	p=b;
	if(a==0)
		my_printf("error\n");
	else
		for(i=0;i<5;i++)
		{
			if(i!=m&&i!=n)
			{
				for(j=0;j<4;j++)
				my_printf("%d ",b[i][j]);
				my_printf("%d",b[i][4]);
				my_printf("\n");
			}
			else if(i==m)
			{
				for(j=0;j<4;j++)
			    my_printf("%d ",*(*(p+n)+j));
				my_printf("%d",*(*(p+n)+4));
				my_printf("\n");
			}
			else
			{
				for(j=0;j<4;j++)
			    my_printf("%d ",*(*(p+m)+j));
				my_printf("%d",*(*(p+m)+4));
				my_printf("\n");
			}
		}
}
