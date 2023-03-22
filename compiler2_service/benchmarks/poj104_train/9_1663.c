#define NUM_ITER 2515

#include <header.h>

struct bing
{
	char id[10];
	int age;
	int num;
}bing[100],temp;
int main_bench()
{
	int i,j,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d",&bing[i].id,&bing[i].age);
		bing[i].num=i+1;
	}
	for(j=0;j<=n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(bing[i+1].age>=60&&bing[i].age<bing[i+1].age)
			{
				temp=bing[i+1];
				bing[i+1]=bing[i];
				bing[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		my_printf("%s\n",bing[i].id);
	return 0;
}
