#define NUM_ITER 56324

#include <header.h>

int main_bench()
{
	int n,a=0,b=0,c=0,d=0,i,m;
	double a1,b1,c1,d1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&m);
		if(m<=18)
		a++;
		else if(m>18&&m<36)
		b++;
		else if(m>35&&m<61)
		c++;
		else
		d++;
	}
	a1=(double)a/n*100;	b1=(double)b/n*100;
	c1=(double)c/n*100;	d1=(double)d/n*100;
	my_printf("1-18: %.2lf%%\n",a1);
    my_printf("19-35: %.2lf%%\n",b1);
    my_printf("36-60: %.2lf%%\n",c1);
    my_printf("60??: %.2lf%%\n",d1);
}