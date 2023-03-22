#define NUM_ITER 57088

#include <header.h>

int main_bench(){
int n,i,aa;
double a1=0,b1=0,c1=0,d1=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d",&aa);
	if(aa<=18){
	  a1++;
	}else if(aa<=35){
	  b1++;
	}else if(aa<=60){
	  c1++;
	}else if(aa>60){
	  d1++;
	}
	

}my_printf("1-18: %.2lf%%\n",100*a1/n);
	my_printf("19-35: %.2lf%%\n",100*b1/n);
	my_printf("36-60: %.2lf%%\n",100*c1/n);
	my_printf("60??: %.2lf%%",100*d1/n);
return 0;
}