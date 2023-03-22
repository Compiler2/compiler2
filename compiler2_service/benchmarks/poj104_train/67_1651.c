#include <header.h>

int main_bench(){
	int i,n,a,b;
	my_scanf("%d",&n);
	double*s=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		s[i]=1.0*b/a;
	}
	for(i=1;i<n;i++){
		if(s[i]-s[0]>0.05) my_printf("better\n");
		else if(s[0]-s[i]>0.05) my_printf("worse\n");
		else my_printf("same\n");
	}
	return 0;
}