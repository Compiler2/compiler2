#define NUM_ITER 18189

#include <header.h>

main_bench()
{
	int n,i,score;
	my_scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	double b[n];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&score);
		if(score>=90)
			b[i]=4.0;
		else if(score>=85)
			b[i]=3.7;
		else if(score>=82)
			b[i]=3.3;
		else if(score>=78)
			b[i]=3.0;
		else if(score>=75)
			b[i]=2.7;
		else if(score>=72)
			b[i]=2.3;
		else if(score>=68)
			b[i]=2.0;
		else if(score>=64)
			b[i]=1.5;
		else if(score>=60)
			b[i]=1.0;
		else
			b[i]=0;
	}
	double sum;
	int x;
	sum=0;
	x=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i]*b[i];
		x=x+a[i];
	}
	double ave;
	ave=sum/x;
	my_printf("%.2lf",ave);
	return 0;
}