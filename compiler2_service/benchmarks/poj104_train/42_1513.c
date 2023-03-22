#include <header.h>

int main_bench(){
	int n,i,k=0,p;
	my_scanf("%d",&n);
	int a[1000000],b[1000000];
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	'\n';
	my_scanf("%d",&p);
	for(i=0;i<n;i++){
		if(a[i]!=p){
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k-1;i++){
		my_printf("%d ",b[i]);
	}
	my_printf("%d",b[k-1]);
	return 0;
}