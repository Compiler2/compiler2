#define NUM_ITER 19142

#include <header.h>

int main_bench()
{
	struct student
	{
		int num;
		int chinese;
		int math;
		int sum;
	}stu[100001],t;
    int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&stu[i].num,&stu[i].chinese,&stu[i].math);
		stu[i].sum=stu[i].chinese+stu[i].math;
	}
    for(i=0;i<3;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(stu[j].sum>=stu[j+1].sum)
			{
				t=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=t;
			}
		}
	}
	for(i=n-1;i>n-4;i--)
	{
		my_printf("%d %d\n",stu[i].num,stu[i].sum);
	}
	return 0;
}