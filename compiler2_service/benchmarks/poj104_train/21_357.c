#define NUM_ITER 5490

#include <header.h>

struct num
{
   int a;
   double b;
}num[300];
int main_bench()
{
	int n,i,j;
	double sum=0,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num[i].a);
		sum=sum+num[i].a;
	}
	t=sum/n;
	for(i=0;i<n;i++)
	{
		if(num[i].a>t)
			num[i].b=num[i].a-t;
		else
			num[i].b=t-num[i].a;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(num[j].b<num[j+1].b)
			{
				num[300]=num[j];
				num[j]=num[j+1];
				num[j+1]=num[300];
			}
		}
	}
	if(num[0].b!=num[1].b)
		my_printf("%d\n",num[0].a);
    else if(num[0].b==num[1].b)
	{
		my_printf("%d",num[0].a);
		my_printf(",%d\n",num[1].a);
	}
}

