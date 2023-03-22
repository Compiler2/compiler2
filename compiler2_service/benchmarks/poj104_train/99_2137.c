#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	double a[100];
	double s1=0,s2=0,s3=0,s4=0,s5=0;
	for(int i=0;i<n;i++){
		my_scanf("%lf",&a[i]);
		if(a[i]<=18)
			s1++;
		if(a[i]>18&&a[i]<=35)
			s2++;
		if(a[i]>35&&a[i]<=60)
			s3++;
		if(a[i]>60)
			s4++;
		s5++;
	}
	my_printf("1-18: %.2lf%%\n",s1/s5*100);
	my_printf("19-35: %.2lf%%\n",s2/s5*100);
	my_printf("36-60: %.2lf%%\n",s3/s5*100);
	my_printf("60??: %.2lf%%\n",s4/s5*100);
	return 0;
}