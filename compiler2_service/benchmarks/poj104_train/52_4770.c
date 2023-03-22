#include <header.h>

int main_bench()
{
	int n,m;
	my_scanf("%d%d",&n,&m);
	int i,temp,a[101];
	for(i=n-1;i>=0;i--){
		my_scanf("%d",&a[i]);}
	while(m--){
		
	temp=a[0];
	for(i=0;i<n-1;i++){
	a[i]=a[i+1];}
	a[n-1]=temp;}
	for(i=n-1;i>0;i--){
	my_printf("%d ",a[i]);}
	my_printf("%d\n",a[i]);
	return 0;
}