#include <header.h>

int main_bench(){
	int n,i,s=0,m,j[100];
	my_scanf("%d",&n);
	struct point
	{
		int a;
		int b;
	}
	c[100];
	for (i=0;i<n;i++){
		my_scanf("%d%d",&c[i].a,&c[i].b);
		if (c[i].a>=90 && c[i].a<=140 && c[i].b>=60 && c[i].b<=90){
			s++;
			j[i]=s;
		}else{
			j[i]=0;
			s=0;
		}
	}
	for (i=1;i<n;i++){
		if (j[i]<j[i-1]){
			m=j[i];
			j[i]=j[i-1];
			j[i-1]=m;
		}
	}
	my_printf("%d\n",j[n-1]);
	return 0;
}