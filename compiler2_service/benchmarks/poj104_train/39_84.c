#define NUM_ITER 9392

#include <header.h>

struct student 
{char name[30];
 int score1;
 int score2;
 char ganbu[1];
 char xibu[1];
 int lunwen;
 int s;
}stu[100];
main_bench()
{
	int N,i,max=0,j,sum=0;
	my_scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		my_scanf("%s%d%d%s%s%d",stu[i].name,&stu[i].score1,&stu[i].score2,stu[i].ganbu,stu[i].xibu,&stu[i].lunwen);
	}
	for(i=0;i<N;i++)
	{
		stu[i].s=0;
	}
	for(i=0;i<N;i++)
	{
		if(stu[i].score1>80&&stu[i].lunwen>0)
			stu[i].s=stu[i].s+8000;
		if(stu[i].score1>85&&stu[i].score2>80)
			stu[i].s=stu[i].s+4000;
		if(stu[i].score1>90)
			stu[i].s=stu[i].s+2000;
		if(stu[i].score1>85&&stu[i].xibu[0]=='Y')
			stu[i].s=stu[i].s+1000;
		if(stu[i].score2>80&&stu[i].ganbu[0]=='Y')
			stu[i].s=stu[i].s+850;
	}
	for(i=0;i<N;i++)
	{
		if(stu[i].s>max) 
		{
			max=stu[i].s;
			j=i;
		}
		sum=sum+stu[i].s;
	}
	my_printf("%s\n",stu[j].name);
	my_printf("%d\n",max);
	my_printf("%d\n",sum);
    
	
}