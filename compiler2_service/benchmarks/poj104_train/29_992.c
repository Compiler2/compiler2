#define NUM_ITER 40

#include <header.h>

double F(int n);
int main_bench(){
	int j,i,n,m;
    double result;

	my_scanf("%d", &m);
	for (j=0;j<m;j++){
	result=0;	
	my_scanf ("%d",&n);
	for (i=3;i<n+3;i++){
		result += F(i)/F(i-1);}
	my_printf("%.3lf\n", result);}
	return 0;
}
double F(int n){
double a,b,x,i;
double r;
a=0;
b=1;
if (n==0) return 0;
if (n==1) return 1;
if (n>1){
	for (i=1;i<n;i++){
	x=a;
	a=b;
	r=x+a;
	b=r;
	}
}
return r;
}