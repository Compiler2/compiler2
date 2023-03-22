#define NUM_ITER 52658

#include <header.h>

int main_bench()
{
	int n,i;
	int a[101];
	double counta,countb,countc,countd,one=0, two=0 ,three=0, four=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)one++;
		else if(a[i]>=19&&a[i]<=35) two++;
		else if(a[i]>=36&&a[i]<=60) three++;
		else if(a[i]>=61) four++;
	}
counta=one/n*100;
countb=two/n*100;
countc=three/n*100;
countd=four/n*100;
	my_printf("1-18: %.2lf",counta);
	my_printf("%%\n");
	my_printf("19-35: %.2lf",countb);
	my_printf("%%\n");
	my_printf("36-60: %.2lf",countc);
	my_printf("%%\n");
	my_printf("60??: %.2lf",countd);
	my_printf("%%");

}
