#include <header.h>


void turn(int a[],int n)
{
	int temp,i,j;
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%d",a[i]);
		if(i<n-1)
			my_printf(" ");
	}
}

int main_bench()
{
	int x,y,i;
	int b[100],c[100];
	my_scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
	{
		my_scanf("%d",&b[i]);
	}
	for(i=0;i<y;i++)
	{
		my_scanf("%d",&c[i]);
	}
	turn(b,x);
	my_printf(" ");
	turn(c,y);
	return 0;
}


