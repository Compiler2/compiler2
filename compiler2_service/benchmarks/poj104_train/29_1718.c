#define NUM_ITER 5335

#include <header.h>

int main_bench(){
int m,n,counta,countb,x,y;
double result;
my_scanf("%d",&m);
counta=0;
while(counta<m){
	result=0.0;
	countb=0;
	x=2;
	y=1;
	my_scanf("%d",&n);
		while(countb<n){result+=(1.0*x)/y;
			x=x+y;
			y=x-y;
			countb++;}
	counta+=1;
    my_printf("%.3lf\n",result);}

return 0;
}