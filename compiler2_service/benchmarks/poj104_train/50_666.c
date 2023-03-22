#define NUM_ITER 410775

#include <header.h>

int main_bench()
{
	int w,m,j,w1;
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&w);
	if(w==7) my_printf("1\n");
	for(m=2;m<=12;m++){
		int sum =0;
		for(j=0;j<m-1;j++){
			sum+=days[j];}
		sum+=12;
		w1=(w+sum%7<=7)?(w+sum%7):(w-7+sum%7);
		if(w1==5) my_printf("%d\n",m);
	}
	return 0;
}