#include <header.h>


int main_bench()
{
    int n,i,age;
	int a=0,b=0,c=0,d=0;
    my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&age);
	    if(age<=18)
			a++;
		else if(age>=19&&age<=35)
			b++;
		else if(age>=36&&age<=60)
			c++;
		else if(age>=61)
			d++;
	}
	my_printf("1-18: %.2lf%%\n",(double)a/(double)n*100.00);
	my_printf("19-35: %.2lf%%\n",(double)b/(double)n*100.00);
	my_printf("36-60: %.2lf%%\n",(double)c/(double)n*100.00);
	my_printf("60??: %.2lf%%\n",(double)d/(double)n*100.00);
	return 0;
}
