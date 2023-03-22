#define NUM_ITER 20484

#include <header.h>

struct Student
{
	int num;
	int chinese;
	int math;
	int score;
};
int main_bench()
{
	int n;
	int i,k,j;
	struct Student student[100000];
	struct Student temp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&student[i].num);
		my_scanf("%d",&student[i].chinese);
		my_scanf("%d",&student[i].math);
		student[i].score=student[i].chinese+student[i].math;
	}
	for(i=0;i<3;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(student[j].score>student[k].score) k=j;
		}
		if(k!=i)
		{
			temp=student[i];
			student[i]=student[k];
			student[k]=temp;
		}
	}
	for(i=0;i<3;i++)
	{
		my_printf("%d %d\n",student[i].num,student[i].score);
	}
	return 0;
}