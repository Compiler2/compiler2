#define NUM_ITER 3255

#include <header.h>

int main_bench(){
  double a,b,e,s;
  int m,n;
  my_scanf("%d",&m);
  for(int i=1;i<=m;i++){
	s=0;
	a=1;
	b=2;
	my_scanf("%d",&n);
	for(int j=1;j<=n;j++){
		s=s+b/a;
		e=a+b;
		a=b;
		b=e;
	}
	my_printf("%.3lf\n",s);
}
	return 0;
}

