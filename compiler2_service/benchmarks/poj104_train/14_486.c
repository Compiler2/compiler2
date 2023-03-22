#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	struct student
	{
		int num;
		int yu;
		int shu;
	}a[100000];
	int d[100000];
	int i=0;;
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&a[i].num,&a[i].yu,&a[i].shu);
		d[i]=a[i].yu+a[i].shu;
	}
	int q,w,e,h;
	q=0;
	w=0;e=0;
	for(i=0;i<n;i++)
	{
		if(d[q]<d[i])
		{
			q=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(d[q]>=d[i]&&i!=q&&d[w]<d[i])
		{
			w=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(d[w]>=d[i]&&i!=w&&i!=q&&d[e]<d[i])
		{
			e=i;
		}
	}
	my_printf("%d %d\n",a[q].num,d[q]);
	my_printf("%d %d\n",a[w].num,d[w]);
	my_printf("%d %d\n",a[e].num,d[e]);
	return 0;
}