#define NUM_ITER 51385

#include <header.h>


int main_bench()
{
	int a[100],n,s1=0,s2=0,s3=0,s4=0,i;
	float p1,p2,p3,p4;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	if(a[i]<=18)s1+=1;
	else if((19<=a[i])&&(a[i]<=35))s2+=1;
	else if((36<=a[i])&&(a[i]<=60))s3+=1;
	else if(a[i]>=61)s4+=1;
	}
	p1=100*(float)s1/n;
	p2=100*(float)s2/n;
	p3=100*(float)s3/n;
	p4=100*(float)s4/n;
	my_printf("1-18: %.2f%%\n",p1);
		my_printf("19-35: %.2f%%\n",p2);
			my_printf("36-60: %.2f%%\n",p3);
				my_printf("60??: %.2f%%\n",p4);
	return 0;
}

