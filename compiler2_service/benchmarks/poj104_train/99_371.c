#define NUM_ITER 54160

#include <header.h>


int main_bench()
{
	int a[100],n=0;
	int i=0,e=0,b=0,c=0,d=0;

	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		if(a[i]<19 && a[i]>0){
			e++;
		}
		else if(a[i]<36 && a[i]>18){
			b++;
		}
		else if(a[i]<61 && a[i]>35){
			c++;
		}
		else if(a[i]>60){
			d++;
		}
	}
	double a1=e*100.00/n;
	double b1=b*100.00/n;
	double c1=c*100.00/n;
	double d1=d*100.00/n;

	my_printf("1-18: %.2lf%%\n",a1);
    my_printf("19-35: %.2lf%%\n",b1);
	my_printf("36-60: %.2lf%%\n",c1);
	my_printf("60??: %.2lf%%\n",d1);

	return 0;
}