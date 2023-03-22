#include <header.h>

int main_bench()
{
    int sz[100];
	int n,i,a=0,b=0,c=0,d=0;
	double a1,b1,c1,d1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		if(sz[i]<=18)
			a++;
		if(sz[i]<=35&&sz[i]>=19)
			b++;
        if(sz[i]<=60&&sz[i]>=36)
			c++;
		if(sz[i]>60)
			d++;
	}
    a1=(a*1.0/n*1.0)*100;
	b1=(b*1.0/n*1.0)*100;
	c1=(c*1.0/n*1.0)*100;
	d1=(d*1.0/n*1.0)*100;
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",a1,b1,c1,d1);
	return 0;
}