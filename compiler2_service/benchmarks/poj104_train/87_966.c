#define NUM_ITER 15746

#include <header.h>

int main_bench(){
	int x1,f1,m1,x2,f2,m2,i;
	for(i=0;i<100;i++){
	my_scanf("%d%d%d%d%d%d",&x1,&f1,&m1,&x2,&f2,&m2);
	x2=x2+12;
	if(x1==0 && x2==12)
		break;
	my_printf("%d\n",3600*(x2-x1)+60*(f2-f1)+(m2-m1));
	
	}
	
		
	
	return 0;
}