#define NUM_ITER 21591

#include <header.h>


struct student
{
int ID;
int chi;
int math;
int total;
} stu[1000000];

int main_bench()
{
	int STUDENT_NUM,i,j,temp1,temp2;	
	my_scanf("%d",&STUDENT_NUM);
	for(i=0;i<STUDENT_NUM;i++)
	{
		my_scanf("%d %d %d",&stu[i].ID,&stu[i].chi,&stu[i].math);
		stu[i].total=stu[i].chi+stu[i].math;
	}
	for(i=0;i<3;i++)
	{
	    for(j=i+1;j<STUDENT_NUM;j++)
		{
			if(stu[i].total<stu[j].total)
			{
				temp1=stu[i].ID;
				stu[i].ID=stu[j].ID;
				stu[j].ID=temp1;
				temp2=stu[i].total;
				stu[i].total=stu[j].total;
				stu[j].total=temp2;
			}
		}
	}
	my_printf("%d %d\n%d %d\n%d %d\n",stu[0].ID,stu[0].total,stu[1].ID,stu[1].total,stu[2].ID,stu[2].total);
}