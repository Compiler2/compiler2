#define NUM_ITER 18642

#include <header.h>

struct student
{
	int num;
	int score1;
	int score2;
	int sum;
}stu[100000],max,secondmax,thirdmax;
int main_bench()
{
	max.sum=secondmax.sum=thirdmax.sum=0;
	int i,n;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&stu[i].num,&stu[i].score1,&stu[i].score2);
		stu[i].sum=stu[i].score1+stu[i].score2;
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].sum>max.sum)
			max=stu[i];
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].sum<max.sum&&stu[i].sum>secondmax.sum)
			secondmax=stu[i];
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].sum==max.sum&&stu[i].num!=max.num)
		{
			secondmax=stu[i];
			break;
		}
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].sum<secondmax.sum&&stu[i].sum>thirdmax.sum)
			thirdmax=stu[i];
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].sum==secondmax.sum&&stu[i].num!=max.num&&stu[i].num!=secondmax.num)
		{
			thirdmax=stu[i];
			break;
		}
	}
	my_printf("%d %d\n%d %d\n%d %d",max.num,max.sum,secondmax.num,secondmax.sum,thirdmax.num,thirdmax.sum);
	return 0;
}