#define NUM_ITER 215059

#include <header.h>

int hu(int a[][5], int m, int n);
int main_bench()
{
	int h[5][5],p,q,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&h[i][j]);
		}
	}
	my_scanf("%d%d",&p,&q);
	if(hu(h,p,q))
	{
		for(i=0;i<5;i++)
		{
			my_printf("%d %d %d %d %d\n",h[i][0],h[i][1],h[i][2],h[i][3],h[i][4]);
		}		
	    
	}
	else
		my_printf("error");
}
int hu(int a[][5], int m, int n)
{
	int temp=0,i;
	if(m>4||n>4)
		return 0;
	else
	{
		for(i=0;i<5;i++)
		{
			temp=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=temp;
		}
		
	    
		
		return 1;
	}
}
