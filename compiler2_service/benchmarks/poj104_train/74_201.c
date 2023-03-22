#define NUM_ITER 1494871

#include <header.h>

int main_bench()
{
	int ss(int x);
	int hws(int y);
	int a[1000];
    int m,n,i,j=0;
	my_scanf("%d %d",&m,&n);
	for (i=m;i<=n;i++)
		if (ss(i)==1&&(i==hws(i)))
		{
			a[j]=i;
			j++;
		}
	for (i=0;i<j;i++)
	{
		my_printf("%d",a[i]);
		if (i<j-1)
			my_printf(",");
	}
	if (j==0)
		my_printf("no");
}

int ss(int x)
{
	int b;
	for (b=2;b<=(x-1)/2;b++)
		if (x%b==0)
		{
			return(0);
		    break;
		}
	if (b>(x-1)/2)
		return(1);
}

int hws(int y)
{
	int z=0;
	while(y>0)
	{
		z=z*10+(y-(y/10)*10);
		y=y/10;
	}
	return(z);
}