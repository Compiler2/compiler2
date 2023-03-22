#include <header.h>


int main_bench(){
	unsigned int n,i,a,tot=0,min=65535,max=0;
	float avg;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a);
		tot+=a;
		if(min>a) min=a;
		if(max<a) max=a;
	}
	avg=(float)tot/n;
	if(avg-min>=max-avg){
		my_printf("%d",min);
		if(avg-min==max-avg)
			my_printf(",%d",max);
	}
	else
		my_printf("%d",max);
}