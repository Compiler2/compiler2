#define NUM_ITER 10367

#include <header.h>

int main_bench()
{
	struct student
	{
		char name[30],gb,west;
		int sco1,sco2,paper,money;
	} stu[100];
	int n,i;
	long sum=0,max=0;
	char maxs[30];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].sco1,&stu[i].sco2,&stu[i].gb,&stu[i].west,&stu[i].paper);
		stu[i].money=0;
		if (stu[i].sco1>80&&stu[i].paper>=1) stu[i].money+=8000;
		if (stu[i].sco1>85&&stu[i].sco2>80) stu[i].money+=4000;
		if (stu[i].sco1>90) stu[i].money+=2000;
		if (stu[i].sco1>85&&stu[i].west=='Y') stu[i].money+=1000;
		if (stu[i].sco2>80&&stu[i].gb=='Y') stu[i].money+=850;
	}
	for (i=0;i<n;i++)
	{
		sum+=stu[i].money;
		if (stu[i].money>max) {max=stu[i].money;strcpy(maxs,stu[i].name);}
	}
	my_printf("%s\n%ld\n%ld",maxs,max,sum);
}