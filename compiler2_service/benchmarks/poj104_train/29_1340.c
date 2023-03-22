#include <header.h>

int main_bench(){
	int m,i,k,n;
	my_scanf("%d",&m);
	double *t=(double*)malloc(sizeof(double)*m);
	for(i=0;i<m;i++){
		my_scanf("%d",&n);
		int p=2,q=1;
		t[i]=0;
		for(k=0;k<n;k++){
			t[i]+=1.0*p/q;
			int s=p;
			p=p+q;
			q=s;
		}
	}
	for(i=0;i<m;i++){
		my_printf("%.3lf\n",t[i]);
	}
	free(t);
	return 0;
}