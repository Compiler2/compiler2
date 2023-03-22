#include <header.h>

double fei(int n);
int main_bench(){
	int i,m,n;
	double result=0;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&n);
		result=fei(n);
		my_printf("%.3lf\n",result);
	}
	return 0;
}
double fei(int n){
	double result=0;
	int a=1,b=1,k;
	for(k=1;k<=n;k++){
		int d=a;
		a+=b;
		b=d;
		result+=1.0*a/b;
	}
	return result;
}