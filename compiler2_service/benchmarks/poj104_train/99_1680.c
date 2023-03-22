#include <header.h>

int main_bench()
{
	int n,i,o=0,p=0,k=0,q=0,a[100];
	char m='%';
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<19)
			o++;
		else if(a[i]>18&&a[i]<36)
			p++;
		else if(a[i]>35&&a[i]<61)
			k++;
		else q++;
	}
	my_printf("1-18: %.2lf%c\n",100*o*1.0/n,m);
	my_printf("19-35: %.2lf%c\n",100*p*1.0/n,m);
	my_printf("36-60: %.2lf%c\n",100*k*1.0/n,m);
	my_printf("60??: %.2lf%c\n",100*q*1.0/n,m);
	return 0;
}
						
