#define NUM_ITER 14085

#include <header.h>

struct 
{
	int xuehao;
	int yuwen;
	int shuxue;
}student[1000000];
void swap(int*a,int*b);
int main_bench()
{
	int n=0;
	my_scanf("%d",&n);
	int i=0,j=0,total[1000000];
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&student[i].xuehao,&student[i].yuwen,&student[i].shuxue);
		total[i]=student[i].yuwen+student[i].shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(j=n-1;j>0+i;j--)
		{
			if(total[j]>total[j-1])
			{
				swap(&total[j],&total[j-1]);
				swap(&student[j-1].xuehao,&student[j].xuehao);
					swap(&student[j-1].yuwen,&student[j].yuwen);
					swap(&student[j-1].shuxue,&student[j].shuxue);
			}
		}
	}
	for(i=0;i<3;i++)
	{
		my_printf("%d %d\n",student[i].xuehao,total[i]);
	}
	return 0;
}
void swap(int*a,int*b)
{
	int e;
	e=*a;
	*a=*b;
	*b=e;
}