#define NUM_ITER 54294

#include <header.h>

int main_bench()
{
	int n,i,y[101],a=0,b=0,c=0,d=0;
	double A,B,C,D;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&y[i]);
	}
	for(i=0;i<n;i++){
		if(y[i]<=18){
			a++;
		}
		if(y[i]>18&&y[i]<=35){
			b++;
		}
		if(y[i]>35&&y[i]<=60){
			c++;
		}
		if(y[i]>60){
			d++;
		}
	}
	A=(double)a/(double)n*100;
	B=(double)b/(double)n*100;
	C=(double)c/(double)n*100;
	D=(double)d/(double)n*100;
	my_printf("1-18: %.2lf%%\n",A);
	my_printf("19-35: %.2lf%%\n",B);
    my_printf("36-60: %.2lf%%\n",C);
	my_printf("60??: %.2lf%%\n",D);
	return 0;
}
