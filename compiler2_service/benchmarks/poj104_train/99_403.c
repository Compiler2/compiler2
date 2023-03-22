#define NUM_ITER 52461

#include <header.h>

int main_bench(){
	int n,i,age[100],m=0,x=0,p=0,q=0;
	double M,N,P,Q;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++){
		if(age[i]<=18&&age[i]>=1){
			m++;
		}
		if(19<=age[i]&&age[i]<=35){
			x++;
		}
		if(36<=age[i]&&age[i]<=60){
			p++;
		}
		if(age[i]>60){
			q++;
		}
	}
	M=((double)m/n)*100;
	N=((double)x/n)*100;
	P=((double)p/n)*100;
	Q=((double)q/n)*100;
	my_printf("1-18: %.2lf%%\n",M);
	my_printf("19-35: %.2lf%%\n",N);
	my_printf("36-60: %.2lf%%\n",P);
	my_printf("60??: %.2lf%%\n",Q);
	return 0;
}