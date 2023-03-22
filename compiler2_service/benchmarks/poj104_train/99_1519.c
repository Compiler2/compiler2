#include <header.h>

int main_bench()
{
	int i, n, input, r[4];
	my_scanf("%d", &n);
	for(i=0; i<4; i++) r[i]=0;
	for(i=0; i<n; i++)
	{
		my_scanf("%d", &input);
		if(input<19) r[0]++;
		if(input>18&&input<36) r[1]++;
		if(input>35&&input<61) r[2]++;
		if(input>60) r[3]++;
	}
	my_printf("1-18: %.2lf%%\n", r[0]*100.0/n);
	my_printf("19-35: %.2lf%%\n", r[1]*100.0/n);
	my_printf("36-60: %.2lf%%\n", r[2]*100.0/n);
	my_printf("60??: %.2lf%%\n", r[3]*100.0/n);
	return 0;
}