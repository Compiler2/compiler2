#include <header.h>


int main_bench()
{
	int n,i,t,s=0,a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&t);
		s++;
		if(t<=18&&t>0)
			a++;
		else if(t<=35)
			b++;
		else if(t<=60)
			c++;
		else if(t>60)
			d++;
	}
	my_printf("1-18: %.2lf%%\n",(double)a*100/(double)s);
	my_printf("19-35: %.2lf%%\n",(double)b*100/(double)s);
	my_printf("36-60: %.2lf%%\n",(double)c*100/(double)s);
	my_printf("60??: %.2lf%%\n",(double)d*100/(double)s);
	return 0;
}