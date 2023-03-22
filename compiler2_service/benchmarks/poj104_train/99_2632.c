#include <header.h>

int main_bench()
{
	int n,i,k=0,m=0,t=0,s=0;
	my_scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		if(a[i]<=18)
			k+=1;
		else if(a[i]>18&&a[i]<=35)
		    m+=1;
		else if(a[i]>35&&a[i]<=60)
			t+=1;
		else
		    s+=1;
	}
	my_printf("1-18: %.2lf%\n",(double)(k*100)/n);
	my_printf("19-35: %.2lf%\n",(double)(m*100)/n);
	my_printf("36-60: %.2lf%\n",(double)(t*100)/n);
	my_printf("60??: %.2lf%\n",(double)(s*100)/n);
	return 0;
}