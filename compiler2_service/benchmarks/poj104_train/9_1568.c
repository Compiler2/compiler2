#define NUM_ITER 14959

#include <header.h>

struct person 
{
	char ID[20];
	int age;
};
int main_bench()
{
	struct person a[100]={0}, b[100]={0},t;
	int n, i,j, k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%d",a[i].ID,&a[i].age);
		if(a[i].age>=60)
		{
			b[k]=a[i];
			k++;
		}

	}
	for(i=0;i<k-1;i++)
		for(j=0;j<k-1-i;j++)
		{
			if(b[j].age<b[j+1].age)
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;

			}
		}
		for(i=0;i<k;i++)
		{
			puts(b[i].ID);
			my_printf("\n");
		}
		for(i=0;i<n;i++)
		{
			if(a[i].age<60)
			{
				puts(a[i].ID);
				my_printf("\n");
			}
		}
		return 0;
}