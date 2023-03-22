#define NUM_ITER 9305

#include <header.h>

struct student
{
	char name[20];
	int pingjun;
	int pingyi;
	char bgb[3];
	char xb[3];
    int lunwen;
	int qian;
};


int main_bench()
{
	struct student stu[100]={{"\0"}};
	struct student total={"\0"};
	struct student temp={"\0"};
     int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%d%d",stu[i].name,&stu[i].pingjun,&stu[i].pingyi);
			my_scanf("%s%s%d",&stu[i].bgb,&stu[i].xb,&stu[i].lunwen);

		if(stu[i].pingjun>80&&stu[i].lunwen>=1)
			stu[i].qian=stu[i].qian+8000;

		if(stu[i].pingjun>85&&stu[i].pingyi>80)
            stu[i].qian=stu[i].qian+4000;

		if(stu[i].pingjun>90)
            stu[i].qian=stu[i].qian+2000;

		if(stu[i].pingjun>85&&stu[i].xb[0]=='Y')
            stu[i].qian=stu[i].qian+1000;

		if(stu[i].pingyi>80&&stu[i].bgb[0]=='Y')
           stu[i].qian=stu[i].qian+850;  
		total.qian=total.qian+stu[i].qian;

	}
	for(i=0;i<n;i++)
	{
		if(stu[i].qian>temp.qian)
			temp=stu[i];
	}
	
		my_printf("%s\n%d\n%d\n",temp.name,temp.qian,total.qian);
		return 0;
}


