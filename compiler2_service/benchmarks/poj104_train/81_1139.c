#define NUM_ITER 232344

#include <header.h>

int main_bench()
{
	int i,j,m,n,a[5][5],f=1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&m,&n);
		if(m<0||m>4||n<0||n>4)
			my_printf("error"),f=0;
		else 
			for(j=0;j<5;j++)
				i=a[m][j],a[m][j]=a[n][j],a[n][j]=i;
	
			if(f)
			for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
			my_printf("%d ",a[i][j]);
		my_printf("%d\n",a[i][j]);
		}
		return 0;
	}
	