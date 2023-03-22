#define NUM_ITER 11518

#include <header.h>

int main_bench()
{
	int n,i,sum[100],b,total,max;
	struct student
	{
		char name[20];
		int score;
		int p;
		char leader;
		char w;
		int paper;
	}stu[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].score,&stu[i].p,&stu[i].leader,&stu[i].w,&stu[i].paper);
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		if(stu[i].score>80&&stu[i].paper>0)
			sum[i]=sum[i]+8000;
		if(stu[i].score>85)
		{
			if(stu[i].p>80)
				sum[i]=sum[i]+4000;
			if(stu[i].w=='Y')
				sum[i]=sum[i]+1000;
		}
	    if(stu[i].score>90)
			sum[i]=sum[i]+2000;
		if(stu[i].leader=='Y'&&stu[i].p>80)
			sum[i]=sum[i]+850;
	}
	total=sum[0];
	max=sum[0];
	b=0;
	for(i=1;i<n;i++)
	{
		if(max<sum[i])
		{
			max=sum[i];
			b=i;
		}
		total=total+sum[i];
	}
	my_printf("%s\n%d\n%d",stu[b].name,sum[b],total);
}