#define NUM_ITER 6136

#include <header.h>

int main_bench(){
	int n,i,j,k,a=0;
	int sz[300],sa[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);}
for(i=0;i<n;i++){
	for(j=i-1;j>=0;j--){
		if(sz[i]==sz[j]){
			sz[i]=0;}}}
my_printf("%d",sz[0]);
for(i=1;i<n;i++){
	if(sz[i]!=0){
		my_printf(",%d",sz[i]);}}

	return 0;
}
