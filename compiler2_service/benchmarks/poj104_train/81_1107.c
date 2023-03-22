#define NUM_ITER 234652

#include <header.h>

int main_bench()
{
	int a[5][5],m,n,i,j,t=0,b[5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&m,&n);
	if(m<5&&n<5)
		t++;
	if(t==0)
	{
	   my_printf("error");
	   }
	else 
	{
		for(i=0;i<5;i++)
		{
			b[i]=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=b[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==0)
					my_printf("%d",a[i][j]);
				else
				my_printf(" %d",a[i][j]);
			}
			my_printf("\n");
		}
	}
		return 0;
	}



