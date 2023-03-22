#define NUM_ITER 9845

#include <header.h>

int main_bench()
{
	struct student{
		char name[20];
		int qimo;
		int banji;
		char xibu;
		char ganbu;
		int lunwen;
		int fee;
	}stu[102];
	int i,sum=0,n,max;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d %d %c %c %d\n",stu[i].name,&stu[i].qimo,&stu[i].banji,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);
	}
	for(i=0;i<102;i++)
	{
		stu[i].fee=0;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].qimo>80&&stu[i].lunwen>0)
			stu[i].fee+=8000;
		if(stu[i].qimo>85&&stu[i].banji>80)
			stu[i].fee+=4000;
		if(stu[i].qimo>90)
			stu[i].fee+=2000;
		if(stu[i].qimo>85&&stu[i].xibu=='Y')
			stu[i].fee+=1000;
		if(stu[i].banji>80&&stu[i].ganbu=='Y')
			stu[i].fee+=850;
		sum+=stu[i].fee;
	}
	max=stu[0].fee;
	for(i=1;i<n;i++)
	{
		if(stu[i].fee>max)
			max=stu[i].fee;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].fee==max)
		{my_printf("%s\n%d\n%d",stu[i].name,stu[i].fee,sum);
		break;}
	}
	return 0;
}




