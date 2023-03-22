#define NUM_ITER 6142

#include <header.h>

int main_bench(){
	int n,k,i,sz[1000],result=0,j;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){result++;}}}
	if(result!=0){my_printf("yes");}
	else if(result==0){my_printf("no");}
	
	
	return 0;
}