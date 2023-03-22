#define NUM_ITER 49730

#include <header.h>

int main_bench(){
	int n,i;
	int num[4]={0},pat[101]={0};
	double rate[4];
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d",&pat[i]);
	}
	for (i=0;i<n;i++){
		if (pat[i]<=18)
			num[0]++;
		if (pat[i]>=19&&pat[i]<=35)
			num[1]++;
		if (pat[i]>=36&&pat[i]<=60)
			num[2]++;
		if (pat[i]>=61)
			num[3]++;
	}
	for(i=0;i<4;i++){
		rate[i]=100.0*num[i]/n;
	}
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",rate[0],rate[1],rate[2],rate[3]);
	return 0;
}
