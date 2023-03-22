#define NUM_ITER 234150

#include <header.h>

int main_bench()
{
	int a[5][5],b,c,d,e;
	int huanh(int z[][5],int x,int y);
	for(d=0;d<5;d++)
	{
		for(e=0;e<5;e++)
			my_scanf("%d",&a[d][e]);
	}
	my_scanf("%d%d",&b,&c);
	d=huanh(a,b,c);
	if(d==0)
		my_printf("error");
	if(d!=0)
	{
		for(d=0;d<5;d++)
			for(e=0;e<5;e++)
				my_printf("%d%c",a[d][e],e<4?' ':'\n');
	}
}
int huanh(int z[][5],int x,int y)
{
	int i,t;
	if(x<5&&x>=0&&y<5&&y>=0)
	{
		for(i=0;i<5;i++)
		{
			t=z[x][i];
			z[x][i]=z[y][i];
			z[y][i]=t;
		}
		return(1);
	}
	else
		return(0);
}



