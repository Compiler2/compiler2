#define NUM_ITER 927215

#include <header.h>

int main_bench()
{
	double s,t,r,w,n,i,a,b,c,j=0,k=0,l=0,m=0;
	my_scanf("%lf\n",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%lf",&a);
		if(a<19)
		{
			j++;
		}		
		if(a<36&&a>18)
		{
			k++;
		}
		if(a<61&&a>35)
		{
			l++;
		}
        if(a>60)
		{
			m++;
		}
	}
	r=100*j/n;
	s=100*k/n;
	t=100*l/n;
	w=100*m/n;
        my_printf("1-18: %.2lf%%\n",r);
	my_printf("19-35: %.2lf%%\n",s);
	my_printf("36-60: %.2lf%%\n",t);
	my_printf("60??: %.2lf%%\n",w);
		
	
	return 0;
}