#define NUM_ITER 225304

#include <header.h>

int f(int n,int m,int *point)
{
	if(n>=0 && n<=4 && m>=0 && m<=4)
	{
		int i,b;
		for(i=0;i<5;i++)
		{
			b=*(point+i+n*5);
			*(point+i+n*5)=*(point+i+m*5);
			*(point+i+m*5)=b;
		}
		return 1;
	}
	else return 0;
}
int main_bench()
{
	int m,n,a[5][5],i,j;
	int *point=a[0];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if (f(n,m,point)==0)my_printf("error");
	else 
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			my_printf("%d ",a[i][j]);
		}
		my_printf("%d\n",a[i][4]);
	}
}