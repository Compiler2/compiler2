#include <header.h>

int main_bench(){
	
	double	n,age,a=0,b=0,c=0,d=0;
    my_scanf("%lf",&n);
	for(double i=0;i<n;i++)
	{
		my_scanf("%lf",&age);
			if(age<19)
				a++;
			else if((age>18)&&(age<36))
				b++;
            else if((age>35)&&(age<61))
				c++;
			else if(age>59)
				d++;
	}
     my_printf("1-18: %.2lf%%\n",100*a/n);
my_printf("19-35: %.2lf%%\n",100*b/n);
my_printf("36-60: %.2lf%%\n",100*c/n);
my_printf("60??: %.2lf%%\n",100*d/n);

	return 0;
}
		