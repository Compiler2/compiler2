#include <header.h>

struct student
{
	char name[21];
	int score;
	int point;
	char s1[2];
	char s2[2];
	int paper;
}stu[100];
int main_bench()
{
	int n,i,total=0,t[100]={0},max=0;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{my_scanf("%s%d%d%s%s%d",stu[i].name,&stu[i].score,&stu[i].point,stu[i].s1,stu[i].s2,&stu[i].paper);}		
	for(i=0;i<n;i++)
	{   
		if(stu[i].score>80)
		{
			if(stu[i].paper!=0)
				t[i]+=8000;
			if(stu[i].score>85&&stu[i].point>80)
				t[i]+=4000;		
			if(stu[i].score>85&&stu[i].s2[0]=='Y')
				t[i]+=1000;
			if(stu[i].score>90)
				t[i]+=2000;
		}
		if(stu[i].point>80&&stu[i].s1[0]=='Y')
				t[i]+=850;
	}
	for(i=0;i<n;i++)
	{	max=max>t[i]?max:t[i];}
	for(i=0;i<n;i++)
	{
		if(max==t[i])
		{
			my_printf("%s\n%d\n",stu[i].name,max);break;
		}
	}
	for(i=0;i<n;i++)	
	{	total+=t[i];
	}
		my_printf("%d\n",total);
}
