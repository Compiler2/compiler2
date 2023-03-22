#define NUM_ITER 22349

#include <header.h>

int stu [100000];
int main_bench()
{
	int n,i,j,y,t,m;
	struct s{
		int a;
		int b;
		int c;
	}stu[100000];

	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf ("%d%d%d",&stu[i].a,&stu[i].b,&stu[i].c);
		
	}
	for (i=0;i<3;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if ((stu[j].b+stu[j].c)>(stu[i].b+stu[i].c))
			{
				y=stu[i].b;t=stu[i].c;m=stu[i].a;
				stu[i].b=stu[j].b;
				stu[j].b=y;
				stu[i].c=stu[j].c;
				stu[j].c=t;
				stu[i].a=stu[j].a;
				stu[j].a=m;
			}
		}
	}
	for (i=0;i<3;i++)
	{
		my_printf ("%d %d\n",stu[i].a,(stu[i].b+stu[i].c));
	}
	return 0;
}



	