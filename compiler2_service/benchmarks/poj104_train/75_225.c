#include <header.h>

int main_bench()
{
	char c;
	int max(int array[]);
	int x[1000]={0},y[1000]={0};
	int a[1000]={0},num,i,j;
	for(i=0;i<1000;i++)
	{
		my_scanf("%d",&x[i]);
		c=getchar();
        if(c=='\n')break;
	}
	for(i=0;i<1000;i++)
	{
		my_scanf("%d",&y[i]);
		c=getchar();
        if(c=='\n')break;
	}
	num=i+1;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<num;j++)
		{
			if(x[j]<=i&&y[j]>i)
			{
				a[i]=a[i]+1;
			}
		}
	}
	my_printf("%d %d\n",num,max(a));
	return 0;
}

int max(int array[])
{
	int x=0,i;
	for(i=0;i<1000;i++)
	{
		if(array[i]>x)
			x=array[i];
	}
	return(x);
}