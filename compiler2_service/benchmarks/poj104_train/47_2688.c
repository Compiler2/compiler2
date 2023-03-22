#define NUM_ITER 50209

#include <header.h>

int main_bench(){
	int n,i,j,e;
	int sz[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);}
	
		for(j=0;j<(n/2);j++){
                       e=sz[j];
	              sz[j]=sz[n-j-1];
		     sz[n-j-1]=e;}
                   for(j=0;j<n;j++){if(j==0){
                           my_printf("%d",sz[j]);}
                   else{
	                  my_printf(" %d", sz[j]);}}
return 0;
}