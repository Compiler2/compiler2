#define NUM_ITER 232503

#include <header.h>

int change(int a[5][5],int m,int n)
{
	int z,t,i,j;
	if((m>4||m<0)||(n>4||n<0))
	{
		z=0;
		my_printf("error");
	}
	else
	{
		for(j=0;j<5;j++)
		{
			t=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=t;
			z=1;
		}
		for(i=0;i<5;i++)
		{
			my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}
		
	}
	return(z);
}

int main_bench()
{
	int a[5][5],p,q,m,n;
	for(p=0;p<5;p++)
		{
			for(q=0;q<5;q++)
			{my_scanf("%d",&a[p][q]);}
	}
	my_scanf("%d %d",&m,&n);
	change(a,m,n);
}