#define NUM_ITER 53658

#include <header.h>

int main_bench()
{
	int n,i=0,s1=0,s2=0,s3=0,s4=0,sz[101];
	double o1,o2,o3,o4;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
		if(sz[i]<=18){s1=s1+1;}
		if(sz[i]>=19&&sz[i]<=35){s2=s2+1;}
		if(sz[i]>=36&&sz[i]<=60){s3=s3+1;}
		if(sz[i]>=61){s4=s4+1;}
	}
	o1=s1*1.0*100/n;
	o2=s2*1.0*100/n;
	o3=s3*1.0*100/n;
	o4=s4*1.0*100/n;
	my_printf("1-18: %.2lf%%\n",o1);
	my_printf("19-35: %.2lf%%\n",o2);
	my_printf("36-60: %.2lf%%\n",o3);
	my_printf("60??: %.2lf%%",o4);
	return 0;
}