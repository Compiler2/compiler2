#define NUM_ITER 4601

#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	struct point
	{
		char id[10];
		int age;
	}
	points[100],news[100],tmp;
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d",&points[i].id,&points[i].age);
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(points[j+1].age>=60&&points[j+1].age>points[j].age)
			{
				tmp=points[j+1];
				points[j+1]=points[j];
				points[j]=tmp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		my_printf("%s\n",points[i].id);
	}
	return 0;
}