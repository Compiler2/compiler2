#define NUM_ITER 666881

#include <header.h>

int main_bench()
{
	int w,m,d,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&w);
	w=w+12;
	if (w>7) w=w%7;
	if (w==5) my_printf("1\n");
	for  (m=2;m<=12;m++){
		w=w+a[m-2];
        if (w>7) w=w%7;
	    if (w==5) my_printf("%d\n",m);
	}
	return 0;
}