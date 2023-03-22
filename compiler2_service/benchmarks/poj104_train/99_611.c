#define NUM_ITER 57619

#include <header.h>


int main_bench()
{
	int n,AGE,i,A1_18=0,A19_35=0,A36_60=0,A_60=0;
	float a;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&AGE);
		if (AGE<=18) A1_18++;
		else if (AGE>60) A_60++;
		else if (AGE>18&&AGE<=35) A19_35++;
		else A36_60++;
	}
	a=A1_18*100.0/n;
	my_printf("1-18: %.2f%%\n",a);
	a=A19_35*100.0/n;
	my_printf("19-35: %.2f%%\n",a);
	a=A36_60*100.0/n;
	my_printf("36-60: %.2f%%\n",a);
	a=A_60*100.0/n;
	my_printf("60??: %.2f%%\n",a);
}
