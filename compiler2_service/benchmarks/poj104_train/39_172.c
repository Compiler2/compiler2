#define NUM_ITER 10306

#include <header.h>

int main_bench()
{
	struct student
	{
		char num[21];
		int scor1;
		int scor2;
		char g;
		char x;
		int lun;
		int ss;
	}stu[100];
	int i,n,sum=0;
	struct student max;

	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d %d %c %c %d",stu[i].num,&stu[i].scor1,&stu[i].scor2,&stu[i].g,&stu[i].x,&stu[i].lun);
		stu[i].ss=0;
	}

	for(i=0;i<n;i++)
	{
		if(stu[i].scor1>80&&stu[i].lun>0)
			stu[i].ss+=8000;

		if(stu[i].scor1>85&&stu[i].scor2>80)
			stu[i].ss+=4000;

		if(stu[i].scor1>90)
			stu[i].ss+=2000;

		if(stu[i].scor1>85&&stu[i].x=='Y')
			stu[i].ss+=1000;

		if(stu[i].scor2>80&&stu[i].g=='Y')
			stu[i].ss+=850;
	}

	max=stu[0];
	for(i=0;i<n;i++)
	{
		if(stu[i].ss>max.ss)
			max=stu[i];
		sum+=stu[i].ss;
	}
	my_printf("%s\n",max.num);
	my_printf("%d\n",max.ss);
	my_printf("%d\n",sum);
}