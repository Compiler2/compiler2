#define NUM_ITER 233056

#include <header.h>


int main_bench()
{
	int m,n,a[5][5],i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&m,&n);
	if(m==n||m>4||m<0||n>4||n<0)
		my_printf("error");
	else
		for(i=0;i<5;i++)
		{
			if(i==m)
					my_printf("%d",a[n][0]);
				else if(i==n)
					my_printf("%d",a[m][0]);
				else
					my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				if(i==m)
					my_printf(" %d",a[n][j]);
				else if(i==n)
					my_printf(" %d",a[m][j]);
				else
					my_printf(" %d",a[i][j]);
			}
			my_printf("\n");
		}
	return 0;
}

