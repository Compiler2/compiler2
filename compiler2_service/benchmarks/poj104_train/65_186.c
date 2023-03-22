#define NUM_ITER 32296

#include <header.h>

int main_bench(){
    int i,n,a[200],b[200],ai=0,bi=0;
	my_scanf("%d\n",&n);
	for(i=0;i<n-1;i++){
	my_scanf("%d %d\n",&a[i],&b[i]);
	}
	my_scanf("%d %d",&a[n-1],&b[n-1]);
	for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
		ai+=1;
		}else if(a[i]==b[i]){
		
		}else{
		bi+=1;
		}
	}
	if(ai>bi){
	my_printf("A");
	}else if(ai==bi){
	my_printf("Tie");
	}else{
	my_printf("B");
	}
	return 0;
}