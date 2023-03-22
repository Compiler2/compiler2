#define NUM_ITER 233281

#include <header.h>

int exchange(int [][5],int n,int m);
int main_bench()
{
	int a[5][5],i,j,n,m,num;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	num=exchange(a,n,m);
	if(num==0)
		my_printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==4)
					my_printf("%d",a[i][j]);
				else
			    	my_printf("%d ",a[i][j]);
				if((j+1)%5==0)
					my_printf("\n");
			}
		}
	}
	return 0;
}
int exchange(int (*p)[5],int n,int m)
{
	int i,temp;
	if((n>=0&&n<=4)&&(m>=0&&m<=4))
	{
		if(m!=n)
		{
			for(i=0;i<5;i++)
			{
				temp=*(*(p+n)+i);
				*(*(p+n)+i)=*(*(p+m)+i);
                *(*(p+m)+i)=temp;
			}
		}
		return 1;
	}
	else
		return 0;
}