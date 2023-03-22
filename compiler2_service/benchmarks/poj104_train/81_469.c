#define NUM_ITER 234411

#include <header.h>

int a[5][5];
int change(int m,int n)
{        
         int i,j,t;
	if(n>=5||m>=5)
		return(0);
	else 
	{
		for(j=0;j<5;j++)
		{
			t=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=t;
		}
		return(1);
	}
}

int main_bench()
{
         int m,n;
         int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&n,&m);
	if(change(m,n)==0)
		my_printf("error\n");
	else 
	{
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
                           if(j<4)
			 my_printf("%d ",a[i][j]);
		     if(j==4)
				 my_printf("%d\n",a[i][j]);
		}
	}
}
