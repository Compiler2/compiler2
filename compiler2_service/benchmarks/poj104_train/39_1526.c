#define NUM_ITER 10687

#include <header.h>

int main_bench()
{
	struct student
	{
		char name[50];
		int score1;
		int score2;
		char master;
		char west;
		int paper;
	};
	struct student stu[100];
	int i,n,sum[100]={0},total,max;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
		my_scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].score1,&stu[i].score2
	,&stu[i].master,&stu[i].west,&stu[i].paper);
	for(i=0;i<n;i++)
	{
		if(stu[i].score1>80&&stu[i].paper>0)sum[i]=sum[i]+8000;
        if(stu[i].score1>85&&stu[i].score2>80)sum[i]=sum[i]+4000;
        if(stu[i].score1>90)sum[i]=sum[i]+2000;
	    if(stu[i].score1>85&&stu[i].west==89)sum[i]=sum[i]+1000;
		if(stu[i].score2>80&&stu[i].master==89)sum[i]=sum[i]+850;
	}
	for(i=0,max=sum[0],total=0;i<n;i++)
	{
		if(sum[i]>=max)max=sum[i];
		total+=sum[i];
	}
	for(i=0;i<n;i++)
	{
		if(sum[i]==max){
			my_printf("%s\n",stu[i].name);
			break;}
    }
	my_printf("%d\n",max);
	my_printf("%d\n",total);
}