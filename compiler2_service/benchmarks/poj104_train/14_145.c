#define NUM_ITER 18827

#include <header.h>

int main_bench()
{
	struct student
	{
		int num,sum;
	} stu[100000];
	int n,i,j,t,chi,math;
	my_scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		my_scanf("%d %d %d",&stu[i].num,&chi,&math);
		stu[i].sum=chi+math;
	}
	for (i=0;i<3;i++)
	{
		for (j=n-1;j>i;j--)
		{
			if (stu[j].sum>stu[j-1].sum) 
			{
				t=stu[j].sum;
				stu[j].sum=stu[j-1].sum;
				stu[j-1].sum=t;
				t=stu[j].num;
				stu[j].num=stu[j-1].num;
				stu[j-1].num=t;
			}
		}
	}
	my_printf("%d %d\n",stu[0].num,stu[0].sum);
	my_printf("%d %d\n",stu[1].num,stu[1].sum);
	my_printf("%d %d",stu[2].num,stu[2].sum);
}
