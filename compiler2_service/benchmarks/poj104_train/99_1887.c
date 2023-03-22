#define NUM_ITER 56085

#include <header.h>

int main_bench() {
int i,a,b,c,d,e,n;
a=0;b=0;c=0;d=0;e=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d",&e);
	if(e<19){a++;}
	else if(e<36){b++;}
		else if(e<61){c++;}
		else {d++;}
}
double f,g,h,j;
f=a*1.0/n;
g=b*1.0/n;
h=c*1.0/n;
j=d*1.0/n;

my_printf("1-18: %.2lf",100*f);my_printf("%%\n");
my_printf("19-35: %.2lf",100*g);my_printf("%%\n");
my_printf("36-60: %.2lf",100*h);my_printf("%%\n");
my_printf("60??: %.2lf",100*j);my_printf("%%\n");


return 0;
}

