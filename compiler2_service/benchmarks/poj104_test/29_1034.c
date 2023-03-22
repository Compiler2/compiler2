#define NUM_ITER 3578

#include <header.h>

double f(int n){
	double a=1,b=2,c;
	int i=1;
	double d=2.000;
	if(n==1)
		return d;
    while(i<n){
		c=a+b;
		a=b;b=c;
		d+=c/a;
		i++;
	}
	return d;
}
int main_bench(){
	int m,i,sz[100];
	double s;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&(sz[i]));
	}
    for(i=0;i<m;i++){
		my_printf("%.3lf\n",f(sz[i]));
	}
	return 0;
}
