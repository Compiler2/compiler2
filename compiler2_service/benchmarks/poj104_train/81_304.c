#define NUM_ITER 257017

#include <header.h>

int pand(int y,int z);
int main_bench()
{
	int a[5][5],n,m,i,l,t;
	for(i=0;i<5;i++)
	{
	my_scanf("%d %d %d %d %d\n",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	}
	my_scanf("%d %d\n",&n,&m);
	l=pand(n,m);
	if(l==0)my_printf("error");
	else
	{		
		for(i=0;i<5;i++)
		{
			t=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t;
		}
		for(i=0;i<5;i++)
		{
			my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}
	}
}
int pand(int y,int z)
{
     int x;
	 x=(y<=4&&z<=4)? 1:0;
	 return x;
}