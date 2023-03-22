#include <header.h>

double qh(int n);
int main_bench(){
	int m,k;
	int x[10000];
	my_scanf("%d",&m);
	for(k=0;k<m;k++){
		my_scanf("%d",&x[k]);
	}
	int *ptr;
	for(k=0;k<m;k++){
		ptr=&x[k];
		my_printf("%.3lf\n",qh(*ptr));
	}
	return 0;
}
double qh(int n){
	int i;
	double f1=1.0,f2=2.0;
	double cur=f2/f1,e;
	for(i=2;i<=n;i++){
		e=f2;
		f2=f1+f2;
		f1=e;
		cur+=f2/f1;
	}
	return cur;
}


