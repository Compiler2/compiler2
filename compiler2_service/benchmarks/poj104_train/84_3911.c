#define NUM_ITER 62617

#include <header.h>

int main_bench()
{
	int resulta=0;
	int resultb=0;
	int num;
	int n;
	int i=1;
	my_scanf("%d",&n);
	while (i<=n){
	my_scanf("%d",&num);
	if (i==1){
	resulta=num;
	}else{
		if(num>resulta){
	resultb=resulta;
	resulta=num;
		}
		else {if(num<resulta&&num>resultb){
			resultb=num;}}
	}
	i++;
	}
	my_printf("%d\n",resulta);
	my_printf("%d\n",resultb);


}