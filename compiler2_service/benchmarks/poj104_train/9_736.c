#define NUM_ITER 8873

#include <header.h>

int main_bench()
{
	struct patient
	{
		char id[10];
		int age;
	} a[100],m,k;
	int i,j,n,num=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%s %d",a[i].id,&a[i].age);
	for (i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
			num++;
			m=a[i];
			for (j=i;j>0;j--)
				a[j]=a[j-1];
			a[0]=m;
		}
	}
	for (i=0;i<num;i++)
	{
		for (j=i+1;j<num;j++)
		{
			if (a[i].age<=a[j].age)
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for (i=0;i<n;i++)
		my_printf("%s\n",a[i].id);
	return 0;
}