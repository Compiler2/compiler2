#define NUM_ITER 2378

#include <header.h>

struct patient
{
	char id[20];
	int age;
};
int main_bench()
{
	int i,j,tem,n,len;
	char id[20];
	struct patient a[200];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%s%d",a[i].id,&a[i].age);
	for (i=0;i<n;i++)
	{
		for (j=n-2;j>=i;j--)
			if (a[j+1].age>=60&&a[j+1].age>a[j].age)
			{
				tem=a[j].age;
				a[j].age=a[j+1].age;
				a[j+1].age=tem;
				len=strlen(a[j].id);
				strcpy(id,a[j].id);
				id[len]='\0';
				strcpy(a[j].id,a[j+1].id);
				strcpy(a[j+1].id,id);
			}
		my_printf("%s\n",a[i].id);
	}
	return 0;
}