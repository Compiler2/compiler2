#include <header.h>

int main_bench(){
	int n,a[100],i,b,c,d,f[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);}
	c=n-1;
	b=a[c];
	for(i=0;i<n;i++){
		d=n-1-i;
		f[d]=a[i];}
	for(i=0;i<c;i++){
		my_printf("%d ",f[i]);}
	my_printf("%d",f[c]);
	return 0;
}