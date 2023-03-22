#define NUM_ITER 5340

#include <header.h>

int main_bench(){
int m,n,a,b,e;
double s=0;
my_scanf("%d",&m);
for(int i=1;i<=m;i++){
    my_scanf("%d",&n);
	a=1;
	b=2;
	for(int j=1;j<=n;j++){
        s=s+1.0*b/a;
        e=a;
		a=b;
		b=e+a;
	}
	my_printf("%.3lf\n",s);
	s=0;
}
return 0;
}