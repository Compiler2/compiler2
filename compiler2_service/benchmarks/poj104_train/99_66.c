#include <header.h>

int main_bench()
{

	int a[100];
	int n;
	double b1=0,b2=0,b3=0,b4=0;
	int i;
	double sum;

	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);


	for(i=0;i<n;i++)
       if(a[i]<=18)
            b1++;
	   else if(a[i]<=35)
		   b2++;
	   else if(a[i]<=60)
		   b3++;
	   else
		   b4++;
	sum=(b1+b2+b3+b4)*0.01;
	my_printf("1-18: %.2lf%%\n",b1/sum);
	my_printf("19-35: %.2lf%%\n",b2/sum);
	my_printf("36-60: %.2lf%%\n",b3/sum);
	my_printf("60??: %.2lf%%\n",b4/sum);



		

}