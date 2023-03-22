#define NUM_ITER 10316

#include <header.h>

struct student
{
	char name[20];
	int final;
	int cla;
	char west;
	char cadre;
	int eas;
	int sum;
}stu[100];

int main_bench()
{
	int n,i;
	int all=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].final,&stu[i].cla,&stu[i].cadre,&stu[i].west,&stu[i].eas);
		if((stu[i].final>80)&&(stu[i].eas>=1))
			stu[i].sum=stu[i].sum+8000;
		if((stu[i].final>85)&&(stu[i].cla>80))
			stu[i].sum=stu[i].sum+4000;
		if(stu[i].final>90)
			stu[i].sum=stu[i].sum+2000;
		if((stu[i].final>85)&&(stu[i].west=='Y'))
			stu[i].sum=stu[i].sum+1000;
		if((stu[i].cla>80)&&(stu[i].cadre=='Y'))
			stu[i].sum=stu[i].sum+850;
	}
	for(i=0;i<n;i++)
	{
		all=all+stu[i].sum;
	}
	int most=0;
	for(i=1;i<n;i++)
	{
		if(stu[i].sum>stu[most].sum)
		most=i;
	}
	my_printf("%s\n%d\n%d\n",stu[most].name,stu[most].sum,all);
}