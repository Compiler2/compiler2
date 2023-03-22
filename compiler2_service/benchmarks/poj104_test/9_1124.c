#define NUM_ITER 12211

#include <header.h>

int main_bench()
{
	struct a
	{
		char id[10];
		int age;
	}p,q,a[100],old[100],yog[100];
	int n,i=0,x=0,y=0,k,l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%d",a[i].id,&a[i].age);
		if(a[i].age>=60)
		{
			old[x]=a[i];
			x++;
		}
		if(a[i].age<60)
		{
			yog[y]=a[i];
			y++;
		}
	}
	for(k=1;k<x;k++)
	{
		for(i=0;i<x-1;i++)
		{
			if(old[i].age<old[i+1].age)
			{
				p=old[i+1];
				old[i+1]=old[i];
				old[i]=p;
			}
		}
	}
	for(i=0;i<x;i++)
	{
		my_printf("%s\n",old[i].id);
	}
	for(i=0;i<y;i++)
	{
		my_printf("%s\n",yog[i].id);
	}
	return 0;
}
