#include <header.h>

int main_bench()
{
	int n,i,age[101], a=0, b=0, c=0, d=0;
	double af,bf,cf,df;
	my_scanf ("%d", &n);
	for (i=0;i<n; i++)
		my_scanf ("%d", &age[i]);

	for (i=0; i<n; i++){
		if (age[i]<=18) 
	      a++;
		else if (age[i]>=19&&age[i]<=35)
			b++;
		else if (age[i]>=36&&age[i]<=60)
			c++;
		else if (age[i]>=61)
			d++;}
	af=(double)100*a/n;
	bf=(double)100*b/n;
	cf=(double)100*c/n;
	df=(double)100*d/n;
	my_printf("1-18: %.2lf%%", af);
	my_printf ("\n19-35: %.2lf%%", bf);
	my_printf ("\n36-60: %.2lf%%", cf);
	my_printf ("\n60??: %.2lf%%", df);
	return 0;
}

