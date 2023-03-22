#define NUM_ITER 234598

#include <header.h>

int main_bench()
{
	int a[6][6];
	int i,j;
	int n,m,t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		for(i=0;i<5;i++)
		{	
		  for(j=0;j<5;j++)
		  {
             t=a[n][j];
		     a[n][j]=a[m][j];
		     a[m][j]=t;
		  }
		}
		for(i=0;i<5;i++)
		{	
		  for(j=0;j<4;j++)
		  {
			 my_printf("%d ",a[i][j]);
		  }
		  my_printf("%d\n",a[i][4]);
		}
	
	}
	else my_printf("error");
	return 0;
}


	  	
			