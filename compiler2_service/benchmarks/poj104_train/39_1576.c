#include <header.h>


struct scholarship
{
	char name[20];
	int avscore;
	int clscore;
	char ganbu;
	char xibu;
	int paper;
}stu[100];
int main_bench()
{
int n,i,b[100]={0},c=0,d=0,all=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
	my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].avscore,&stu[i].clscore,&stu[i].ganbu,&stu[i].xibu,&stu[i].paper);
	if(stu[i].avscore>80&&stu[i].paper>0)
		b[i]=b[i]+8000;
	if(stu[i].avscore>85&&stu[i].clscore>80)
		b[i]=b[i]+4000;
	if(stu[i].avscore>90)
		b[i]=b[i]+2000;
	if(stu[i].avscore>85&&stu[i].xibu=='Y')
		b[i]=b[i]+1000;
	if(stu[i].ganbu=='Y'&&stu[i].clscore>80)
		b[i]=b[i]+850;
	if(i>0&&b[i]>c)
	{
		c=b[i];
		d=i;
	}
	else if(i==0) 
		c=b[0];
}
for(i=0;i<n;i++)
all=all+b[i];

my_printf("%s\n%d\n%d\n",stu[d].name,c,all);


}