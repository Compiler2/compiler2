#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	int age[100];
	int a=0,b=0,c=0,d=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&age[i]);
		if(age[i]<=18)
			a++;
		else if(age[i]>18&&age[i]<=35)
			b++;
		else if(age[i]>35&&age[i]<=60)
			c++;
		else
			d++;
	}
	my_printf("1-18: %.2lf",(a*1.00)*100/n);
	my_printf("%%\n");
	my_printf("19-35: %.2lf",(b*1.00)*100/n);
	my_printf("%%\n");
	my_printf("36-60: %.2lf",(c*1.00)*100/n);
	my_printf("%%\n");
	my_printf("60??: %.2lf",(d*1.00)*100/n);
	my_printf("%%\n");
	return 0;
}