#include <header.h>

int main_bench()
{
	int n,i;
	int a=0,b=0,c=0,d=0;
	int age[100];
	float aa,bb,cc,dd;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&age[i]);
	for (i=0;i<n;i++)
	{if (age[i]<=18)
			a=a+1;
	if (age[i]>=19&&age[i]<=35)
			b=b+1;
		if (age[i]>=36&&age[i]<=60)
			c=c+1;
		if (age[i]>60)
			d=d+1;}
	aa=(float)a/n;bb=(float)b/n;cc=(float)c/n;dd=(float)d/n;
	my_printf ("1-18: %.2f%%\n",100*aa);
	my_printf ("19-35: %.2f%%\n",100*bb);
	my_printf ("36-60: %.2f%%\n",100*cc);
	my_printf ("60??: %.2f%%",100*dd);
	return 0;
}
