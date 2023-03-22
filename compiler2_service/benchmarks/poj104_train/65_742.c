#define NUM_ITER 33767

#include <header.h>

int main_bench(){
	int sz[200],sc[200],n,i,a=0,b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&sz[i],&sc[i]);
	}
	for(i=0;i<n;i++){
		if(sz[i]==sc[i]-1||sz[i]==sc[i]+2){
			a++;}
		if(sc[i]==sz[i]-1||sc[i]==sz[i]+2){
			b++;}
	}
	if(a>b){
		my_printf("A");}
	if(a<b){
		my_printf("B");}
	if(a==b){
		my_printf("Tie");}
	return 0;
}
