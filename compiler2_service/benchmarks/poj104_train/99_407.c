#include <header.h>

int main_bench()
{
	int n,a[100],i,m=0,k=0,p=0,q=0;
	my_scanf("%d",&n);
		for(i=0;i<n;i++){
			my_scanf("%d",&a[i]);
			if(a[i]>=1&&a[i]<=18)
				m++;
            if(a[i]>=19&&a[i]<=35)
				k++;
            if(a[i]>=36&&a[i]<=60)
				p++;
            if(a[i]>60)
				q++;
		}
		my_printf("1-18: ");
			my_printf("%.2lf",(double)m/n*100);
			my_printf("%%\n");
        my_printf("19-35: ");
			my_printf("%.2lf",(double)k/n*100);
            my_printf("%%\n");
        my_printf("36-60: ");
			my_printf("%.2lf",(double)p/n*100);
        my_printf("%%\n");
        my_printf("60??: ");
			my_printf("%.2lf",(double)q/n*100);
        my_printf("%%\n");

	return 0;
}