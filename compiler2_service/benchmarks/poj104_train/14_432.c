#define NUM_ITER 27243

#include <header.h>

struct student
{
	int num;
	int Chinese;
	int math;
	int sum;
};

int main_bench()
{
	int i,n,p,q,r,b=0,c=0,d=0;
	struct student a[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&a[i].num,&a[i].Chinese,&a[i].math);
		a[i].sum=a[i].Chinese+a[i].math;
		if(i==0)
			p=q=r=a[i].sum;
		else
		{
			if(a[i].sum>p)
			{
				r=q;
				q=p;
				p=a[i].sum;
				d=c;
				c=b;
				b=i;
			}
			else if(a[i].sum>q)
			{
				r=q;
				q=a[i].sum;
				d=c;
				c=i;
			}
			else if(a[i].sum>r)
			{
				r=a[i].sum;
				d=i;
			}
		}
	}
	my_printf("%d %d\n%d %d\n%d %d\n",a[b].num,a[b].sum,a[c].num,a[c].sum,a[d].num,a[d].sum);
}