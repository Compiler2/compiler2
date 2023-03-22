#define NUM_ITER 57297

#include <header.h>

int main_bench()
{
	int n,a[100],b,c,d,e,j;
	double f,g,h,i;
	my_scanf("%d",&n);
	for(j=0,b=0,c=0,d=0,e=0;j<n;j++)
	{
		my_scanf("%d",&a[j]);
		if(a[j]<19)b++;
		else if(a[j]<36)c++;
		else if(a[j]<61)d++;
		else e++;
	}
	f=(double)b/(double)n*100;
	g=(double)c/(double)n*100;
	h=(double)d/(double)n*100;
	i=(double)e/(double)n*100;
	my_printf("1-18: %.2f%%\n",f);
	my_printf("19-35: %.2f%%\n",g);
	my_printf("36-60: %.2f%%\n",h);
	my_printf("60??: %.2f%%\n",i);
	return 0;
}
