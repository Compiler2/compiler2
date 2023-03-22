#include <header.h>

int main_bench()
{
int m,q=0;
int n;
double e;
double sz[100];
double b=1.0;
double a=2.0;
double sum=0;
my_scanf("%d",&m);
for(int i=0;i<m;i++){
	my_scanf("%d",&n);
	for(int j=0;j<n;j++){
		sum=a/b+sum;
		e=b;
		b=a;
		a=a+e;
	}
	sz[q]=sum;
	q++;
	sum=0;
	b=1.0;
	a=2.0;
}
for(int x=0;x<m;x++){
	my_printf("%.3lf\n",sz[x]);
}
return 0;
}
