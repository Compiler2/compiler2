#define NUM_ITER 27021

#include <header.h>

struct student
{
	int number;
	int math;
	int chinese;
	int total;
};
int main_bench()
{
	struct student a[100000];
	int n,i,sf=0,ss=0,st=0,f,s,t;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&a[i].number,&a[i].math,&a[i].chinese);
		a[i].total=a[i].math+a[i].chinese;
		if (a[i].total>sf)
		{
			t=s; st=ss;
			s=f; ss=sf;
			f=i; sf=a[i].total;
		}
		else 
			if (a[i].total>ss)
			{
				t=s; st=ss;
				s=i; ss=a[i].total;
			}
			else 
				if (a[i].total>st)
				{
					t=i; st=a[i].total;
				}
	}
	my_printf("%d %d\n",f+1,sf);
	my_printf("%d %d\n",s+1,ss);
	my_printf("%d %d\n",t+1,st);
	return 0;
}