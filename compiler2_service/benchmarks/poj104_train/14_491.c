#define NUM_ITER 21335

#include <header.h>

int main_bench()
{
	struct student
	{
		int num;
		int math;
		int chinese;
		int sum;
	}a[100000];
	int n,i,j,temp;
	char c[10];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&a[i].num,&a[i].math,&a[i].chinese);
		a[i].sum=a[i].math+a[i].chinese;
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i].sum<a[j].sum)
			{
				temp=a[i].sum,a[i].sum=a[j].sum,a[j].sum=temp;
				temp=a[i].num,a[i].num=a[j].num,a[j].num=temp;
			}
		}
		my_printf("%d %d\n",a[i].num,a[i].sum);
	}
	return 0;
}