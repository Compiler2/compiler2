#define NUM_ITER 54017

#include <header.h>

int main_bench(){
    int sz[100];
	int n;
	int i;
	double a,b,c,d;
	double A,B,C,D;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	  my_scanf("%d",&(sz[i]));
	}
	a=0;b=0;c=0;d=0;
	for(i=0;i<n;i++){
		if((sz[i]>=1)&&(sz[i]<=18)){
			a++;
		}else if((sz[i]>=19)&&(sz[i]<=35)){
			b++;
		}else if((sz[i]>=36)&&(sz[i]<=60)){
			c++;
		}else{
			d++;
		}
	}
	A=a/n*100;
	B=b/n*100;
	C=c/n*100;
	D=d/n*100;
	my_printf("1-18: %.2lf%%\n",A);
	my_printf("19-35: %.2lf%%\n",B);
	my_printf("36-60: %.2lf%%\n",C);
	my_printf("Over60: %.2lf%%\n",D);
	
return 0;
}