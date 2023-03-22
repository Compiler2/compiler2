#define NUM_ITER 24478

#include <header.h>

struct student
{
	int number;
	int score1;
	int score2;
};
struct student stu[100000];
int main_bench()
{
	int n,i,first=0,second=0,third=0,a[100000];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&stu[i].number,&stu[i].score1,&stu[i].score2);
		a[i]=stu[i].score1+stu[i].score2;
	}
	for(i=0;i<n-1;i++)
	{
		if(a[first]<a[i])
		{
			third=second;
			second=first;
			first=i;
		}
		else if(a[second]<a[i])
		{
			third=second;
			second=i;
		}
		else if(a[third]<a[i])
		{
			third=i;
		}
	}
	my_printf("%d %d\n%d %d\n%d %d\n",stu[first].number,a[first],stu[second].number,a[second],stu[third].number,a[third]);
	return(0);
}