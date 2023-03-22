#include <header.h>

int main_bench(){
	int n,i;
	int age[100];
	double a=0.0,b=0.0,c=0.0,d=0.0;
	double e,A,B,C,D;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++)
	{
		if(age[i]>=1&&age[i]<=18)
			a++;
		else if(age[i]>=19&&age[i]<=35)
			b++;
		if(age[i]>=36&&age[i]<=60)
			c++;
		if(age[i]>=61)
			d++;
	}
	e=a+b+c+d;
	A=a/e*100;
	B=b/e*100;
	C=c/e*100;
	D=d/e*100;
	my_printf("1-18: %.2lf%\n",A);
	my_printf("19-35: %.2lf%\n",B);
	my_printf("36-60: %.2lf%\n",C);
	my_printf("60??: %.2lf%\n",D);
	return 0;
}