#include <header.h>


int main_bench()
{
	int a[5][5];
	int m,n,i,j,k,e;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
		
	}
	my_scanf("%d %d",&m,&n);
	if(m>=0&&m<5&&n>=0&&n<5)
	{
		for(k=0;k<5;k++)
		{
			e=a[m][k];
			a[m][k]=a[n][k];
			a[n][k]=e;
		}
	
     for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==0)
			{my_printf("%d",a[i][j]);}
			if(j>0&&j<4)
			{my_printf(" %d",a[i][j]);}
			if(j==4)
			{my_printf(" %d\n",a[i][j]);}
		}
		
	}
	}
	else my_printf("error");



	return 0;
}
