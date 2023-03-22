#define NUM_ITER 10639

#include <header.h>

int main_bench()
{
	struct student
	{
		char name[100];
		int num1,num2;
		char c1,c2;
		int paper;
	}stu[100];
	int N,sum=0,i,m,b[100],max=0;
	my_scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].num1,&stu[i].num2,&stu[i].c1,&stu[i].c2,&stu[i].paper);
		b[i]=0;
		if(stu[i].num1>80&&stu[i].paper>0)b[i]+=8000;
		if(stu[i].num1>85&&stu[i].num2>80)b[i]+=4000;
		if(stu[i].num1>90)b[i]+=2000;
		if(stu[i].num1>85&&stu[i].c2=='Y')b[i]+=1000;
		if(stu[i].num2>80&&stu[i].c1=='Y')b[i]+=850;
		sum+=b[i];
		if(b[i]>max)
		{
			max=b[i];
			m=i;
		}
	}
	my_printf("%s\n%d\n%d",stu[m].name,b[m],sum);
}


