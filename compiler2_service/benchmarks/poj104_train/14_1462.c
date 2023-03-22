#define NUM_ITER 23462

#include <header.h>



struct student
{
	int num,y,b,he;
}a[100003];

int main_bench()
{
	int n,i,j,he,k;
	my_scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		my_scanf("%d %d %d",&a[i].num,&a[i].y,&a[i].b);
		a[i].he=a[i].y+a[i].b;
	};

	for (i=1;i<=2;i++)
	{
		k=i;
		for (j=i+1;j<=n;j++)
			if (a[j].he>a[k].he) k=j; 
		my_printf("%d %d",a[k].num,a[k].he);
		my_printf("\n");
		a[k].he=0;
	}
			k=1;
		for (j=i+1;j<=n;j++)
			if (a[j].he>a[k].he) k=j; 
		my_printf("%d %d",a[k].num,a[k].he);
		a[k].he=0;
}