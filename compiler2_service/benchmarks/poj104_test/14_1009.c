#define NUM_ITER 25624

#include <header.h>

struct student
{
	int num,z;
}a,max1,max2,max3;

int main_bench()
{
	int i,n,x,y;
	my_scanf("%d",&n);	
	max1.z=-1;
	max2.z=-1;
	max3.z=-1;
	for (i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&a.num,&x,&y);
		a.z=x+y;
		if (a.z>max1.z)
		{
			max3.num=max2.num;
			max3.z=max2.z;
			max2.num=max1.num;
			max2.z=max1.z;
			max1.num=a.num;
			max1.z=a.z;
		}
		else if (a.z>max2.z)
		{
			max3.num=max2.num;
			max3.z=max2.z;
			max2.num=a.num;
			max2.z=a.z;
		}else if (a.z>max3.z)
		{
			max3.num=a.num;
			max3.z=a.z;
		}
	}
	my_printf("%d %d\n%d %d\n%d %d\n",max1.num,max1.z,max2.num,max2.z,max3.num,max3.z);
}