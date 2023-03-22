#define NUM_ITER 4974

#include <header.h>

int main_bench(){
	int sz[500];
	int i,n,k,e;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);}
	for(k=1;k<n;k++){
	for(i=0;i<n-k;i++){
		if(sz[i]>sz[i+1]){
		e=sz[i];
			
		sz[i]=sz[i+1];
		sz[i+1]=e;}}
	}
	
		
		for(i=0;i<n;i++){
			if(sz[i]%2!=0){
				my_printf("%d",sz[i]);
				break;}}
		for(i++;i<n;i++){
			if(sz[i]%2!=0){
				my_printf(",%d",sz[i]);}}
return 0;
}