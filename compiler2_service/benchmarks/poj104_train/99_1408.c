#define NUM_ITER 57712

#include <header.h>

int main_bench()
{
	int n,i,m[100],a=0,b=0,c=0,d=0;
	double q,w,e,r;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&m[i]);
		if(m[i]<=18) {a++;}
		else {if(m[i]<=35) b++;
    else if(m[i]<=60) c++;
    else  d++;}}
	q=(double)a/(double)n*100;
	w=(double)b/(double)n*100;
    e=(double)c/(double)n*100;
     r=(double)d/(double)n*100;
	 my_printf("1-18: %.2lf%%\n",q);
my_printf("19-35: %.2lf%%\n",w);
my_printf("36-60: %.2lf%%\n",e);
my_printf("60??: %.2lf%%",r);
return 0;
}