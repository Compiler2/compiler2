#define NUM_ITER 28258

#include <header.h>

int main_bench()
{
	int i;
	long n;
	int sum[100000];
	int max=0,second=0,third=0;
	int a=0,b=0,c=0;
	my_scanf("%d",&n);
	struct student
	{
		int id;
		int chi;
		int math;
	};
	struct student wangchong[100000];
	for (i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&wangchong[i].id,&wangchong[i].chi,&wangchong[i].math);
		sum[i]=wangchong[i].chi+wangchong[i].math;
		if (sum[i]>third)
		{
			if (sum[i]<=second)
			{
				third=sum[i];
		        c=i+1;
			}
			else
			{
				if (sum[i]<=max)
				{
					third=second;
					second=sum[i];
					c=b;
					b=i+1;
				}
				else
				{
					third=second;
					c=b;
					second=max;
					b=a;
					max=sum[i];
					a=i+1;
				}
			}
		}
	}
	my_printf("%d %d\n%d %d\n%d %d\n",a,max,b,second,c,third);
	return 0;
}