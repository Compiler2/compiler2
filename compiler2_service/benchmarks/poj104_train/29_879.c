#define NUM_ITER 5596

#include <header.h>

int a[10000],b[10000],t[10000];
double c[10000],p[10000];
int main_bench(){
	int m,i,j,maxt=0;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&t[i]);
	}
	for(i=0;i<m;i++){
		if(t[i]>maxt){
			maxt=t[i];
		}
	}
	a[0]=2;
	a[1]=3;
	b[0]=1;
	b[1]=2;
	c[0]=(double)a[0]/(double)b[0];
	c[1]=(double)a[1]/(double)b[1];
	for(i=2;i<=maxt;i++){
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
		c[i]=(double)a[i]/(double)b[i];
	}
	for(i=0;i<m;i++){
		p[i]=0;
		for(j=0;j<t[i];j++){
			p[i]+=c[j];
		}
		my_printf("%.3lf\n",p[i]);
	}
	return 0;
}