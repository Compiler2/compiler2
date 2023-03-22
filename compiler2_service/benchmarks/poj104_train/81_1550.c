#define NUM_ITER 216691

#include <header.h>

int f(int n,int m)
{
	int z;
	if(m>4||n>4)z=0;
	else z=1;
	return(z);
}
int main_bench()
{
	int i,j,t,x,p,q,a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d %d",&p,&q);
	x=f(p,q);
	if(x==0)my_printf("error\n");
	else 
	{
		for(i=0;i<5;i++)
		{
			t=a[p][i];
			a[p][i]=a[q][i];
			a[q][i]=t;
		}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		my_printf("%d ",a[i][j]);
		my_printf("%d\n",a[i][4]);
	}
	}
}

		

