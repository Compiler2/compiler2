#include <header.h>








int main_bench()
{

	int n;
	int ta;
	int t1=0,t2=0,t3=0,t4=0;

	my_scanf("%d",&n);

	int i;
	for(i=0;i<n;i++){
		my_scanf("%d",&ta);

		if(ta<=18){
			t1++;
		}
		else if(ta<=35){
			t2++;
		}
		else if(ta<=60){
			t3++;
		}
		else{
			t4++;
		}
	}

	my_printf("1-18: %.2lf%\n",(double)t1*100/n);
	my_printf("19-35: %.2lf%\n",(double)t2*100/n);
	my_printf("36-60: %.2lf%\n",(double)t3*100/n);
	my_printf("60??: %.2lf%\n",(double)t4*100/n);
	return 0;
}
