#define NUM_ITER 1331067

#include <header.h>

int main_bench()
{
	int n,a[5],i;
	my_scanf("%d",&n);
    a[0]=n%10;a[1]=(int)(n%100)/10;
	a[2]=(int)(n%1000)/100;
	a[3]=(int)(n%10000)/1000;
	a[4]=(int)(n%100000)/10000;
	for(i=0;i<5;i++){
		if(a[i]!=0) my_printf("%d",a[i]);}
	return 0;
}