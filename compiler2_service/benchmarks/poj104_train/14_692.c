#define NUM_ITER 28866

#include <header.h>

struct Student
{
	int id;
	int c;
	int m;
	int sum;
};
int main_bench()
{
	struct Student temp,s1,s2,s3;	
	int i,n;
	s1.sum=s2.sum=s3.sum=-1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&temp.id,&temp.c,&temp.m);
		temp.sum=temp.c+temp.m;
		if(temp.sum>s1.sum)
		{
			s3=s2;
			s2=s1;
			s1=temp;
		}
		else if (temp.sum>s2.sum)
		{
			s3=s2;
			s2=temp;
		}
		else if(temp.sum>s3.sum)
		{
			s3=temp;
		}
	}
	my_printf("%d %d\n%d %d\n%d %d\n",s1.id,s1.sum,s2.id,s2.sum,s3.id,s3.sum);
}
	
