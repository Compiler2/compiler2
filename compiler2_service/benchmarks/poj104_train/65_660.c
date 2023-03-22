#include <header.h>

int main_bench()
{
	int n,i,s[200],z[200],a,b;
	a=0;
	b=0;
	my_scanf("%d", &n);
	for(i=0;i<n;i++){
		my_scanf("%d%d", &s[i], &z[i]);}
	for(i=0;i<n;i++){
		if(s[i]-z[i]==1) {
			b++;}
		if(s[i]-z[i]==2) {
			a++;}
		if(s[i]-z[i]==-1) {
			a++;}
		if(s[i]-z[i]==-2) {
			b++;}
	}
	if(b>a) {
		my_printf("B");}
	else {
		if(b<a) {
		   my_printf("A");}
		else  {
		my_printf("Tie");}
	}
	return 0;
}
