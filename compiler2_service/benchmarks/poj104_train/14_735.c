#define NUM_ITER 25858

#include <header.h>

struct student{
		int j;
		int x,y;
		int z;
	}stu[100000];
int main_bench()
{
	int n,i,a=0,b=0,c=0,a1,b1,c1;
	
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&stu[i].j,&stu[i].x,&stu[i].y);
		stu[i].z=stu[i].x+stu[i].y;
	}
	for(i=0;i<n;i++)
	{
		if(a<stu[i].z)
		{
			a=stu[i].z;
	    	a1=i;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(b<stu[i].z&&i!=a1)
		{
			b=stu[i].z;
	    	b1=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(c<stu[i].z&&i!=a1&&i!=b1)
		{
			c=stu[i].z;
	    	c1=i;
		}
	}
	my_printf("%d %d\n%d %d\n%d %d\n",stu[a1].j,stu[a1].z,stu[b1].j,stu[b1].z,stu[c1].j,stu[c1].z);
	return 0;
}