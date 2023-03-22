#include <header.h>

int main_bench(){
	int i,n,m,a[100]={0};
	int *p;
	my_scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++){
		my_scanf("%d",&a[i]);
	}
	p=&a[n-m+1];
	for (;p<=&a[n];p++){
		my_printf("%d ",*p);
	}
	for (p=&a[1];p<=&a[n-m];p++){
		if (p!=&a[n-m])
			my_printf("%d ",*p);
		else my_printf("%d",*p);
	}
	return 0;
}
