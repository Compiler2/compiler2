#define NUM_ITER 1669363

#include <header.h>


int main_bench()
{
	int n,a[10];
	my_scanf("%d",&n);
	if(n<100){
		a[0]=n%10;
		a[1]=(n-a[0])/10;
		my_printf("%d%d\n",a[0],a[1]);
	}
	else if(n<1000){
		a[0]=n%100;
		a[1]=(n-a[0])/100;
		a[2]=n-100*a[1];
		a[3]=a[2]%10;
		a[4]=(a[2]-a[3])/10;
		my_printf("%d%d%d\n",a[3],a[4],a[1]);
	}
	
	else if(n<10000){
		a[0]=n%1000;
		a[1]=(n-a[0])/1000;
		a[2]=a[0]%100;
		a[3]=(a[0]-a[2])/100;
		a[4]=a[2]%10;
		a[5]=(a[2]-a[4])/10;
		my_printf("%d%d%d%d\n",a[4],a[5],a[3],a[1]);
	}
	else{
		a[7]=n%10000;
		a[6]=(n-a[7])/10000;
		a[0]=a[7]%1000;
		a[1]=(a[7]-a[0])/1000;
		a[2]=a[0]%100;
		a[3]=(a[0]-a[2])/100;
		a[4]=a[2]%10;
		a[5]=(a[2]-a[4])/10;
		my_printf("%d%d%d%d%d\n",a[4],a[5],a[3],a[1],a[6]);
	}
	return 0;
}