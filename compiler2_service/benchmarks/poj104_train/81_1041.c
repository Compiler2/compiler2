#define NUM_ITER 221326

#include <header.h>

int fun(int (*p)[5],int n,int m)
{
	int i,t;
	if(n<0||n>=5||m<0||m>=5)
		return 0;
	else
	{
		for(i=0;i<5;i++)
		{
			t=*(*(p+n)+i);*(*(p+n)+i)=*(*(p+m)+i);*(*(p+m)+i)=t;
		}
		return 1;
	}
}
int main_bench()
{
	int n,i,j,m;
	int a[5][5],(*p)[5];
	p=a;
	for(i=0;i<5;i++)
	{	
		for(j=0;j<5;j++)
		{
			my_scanf("%d",*(p+i)+j);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(fun(p,n,m)==0)
		my_printf("error");
	else
	{
		for(i=0;i<5;i++)
	
		{	
		
			for(j=0;j<5;j++)
		
			{
				if(j!=4)
			my_printf("%d ",*(*(p+i)+j));
				else
         my_printf("%d\n",*(*(p+i)+j));
		
			}
	
		}
	}



	return 0;
}
