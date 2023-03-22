#define NUM_ITER 2559

#include <header.h>

struct p{
	char id[10];
	int age;
};

void bubble(struct p a[100],int n)
{
	int i,j;
	struct p temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j].age>=60)
			{
				if(a[j+1].age>a[j].age)
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
			else
			{
				if(a[j+1].age>=60)
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
}
int main_bench()
{
	int n,i;
	struct p a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%d",a[i].id,&a[i].age);
	}
	bubble(a,n);
	for(i=0;i<n;i++)
	{
		my_printf("%s\n",a[i].id);
	}
	return 0;
}