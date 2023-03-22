#define NUM_ITER 9812

#include <header.h>


struct patient
{
	char ID[10];
	int age;
};

int main_bench()
{
	int n,m;
	int i,j=0,k=0;
	struct patient a[100],b[100],c[100],t[1];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%d",a[i].ID,&a[i].age);
		if(a[i].age>=60)
		{
			strcpy(b[j].ID,a[i].ID);
			b[j].age=a[i].age;
			j=j+1;
		}
		else
		{
			strcpy(c[k].ID,a[i].ID);
			c[k].age=a[i].age;
			k=k+1;
		}

	}
	m=j;
	for(j=1;j<=m-1;j++)
	{
		for(i=0;i<=m-1-j;i++)
		{
			if(b[i].age<b[i+1].age)
			{
               strcpy(t[0].ID,b[i].ID);
		 	   t[0].age=b[i].age;
			   strcpy(b[i].ID,b[i+1].ID);
			   b[i].age=b[i+1].age;
			   strcpy(b[i+1].ID,t[0].ID);
			   b[i+1].age=t[0].age;
			}
		}
	}
	for(i=0;i<m;i++)
		my_printf("%s\n",b[i].ID);
	for(i=0;i<k;i++)
		my_printf("%s\n",c[i].ID);
	return 0;
}