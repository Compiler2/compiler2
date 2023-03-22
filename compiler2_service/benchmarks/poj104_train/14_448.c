#define NUM_ITER 23243

#include <header.h>





struct student
{
	int id;
	int chinese;
	int math;
	int total;
};

int main_bench()
{
	int number;
	struct student stu[100000];
	my_scanf("%d\n",&number);
	for(int i=1;i<=number;++i)
	{
		my_scanf("%d%d%d",&stu[i].id,&stu[i].chinese,&stu[i].math);
		stu[i].total=stu[i].chinese+stu[i].math;
	}
	for(int i=1;i<=3;++i)
	{
		for(int j=i+1;j<=number;++j)
		{
			if(stu[i].total<stu[j].total)
			{
				struct student temp;
				temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
		}
		my_printf("%d %d\n",stu[i].id,stu[i].total);
	}
	return 0;
}
