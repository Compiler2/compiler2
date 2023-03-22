#define NUM_ITER 5945

#include <header.h>

int main_bench(){
	int n,k;
	int xl[1000];
	int i;
	int result;
	int a=0,b=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&xl[i]);
	}
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			result=xl[i]+xl[j];
			if(result==k){
			    a++;
			}else{
			    b++;
			}
		}
	}
	if(a>0){
		my_printf("yes\n");
	}else{
		my_printf("no\n");
	}
	return 0;
}
