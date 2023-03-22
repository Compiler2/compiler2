#define NUM_ITER 50187

#include <header.h>

int a[100000];
int main_bench(){
	int n=0,i=0,k=0,b=0;
	my_scanf("%d\n",&n);
	for(i=0;i<n-1;i++){
		my_scanf("%d ",&a[i]);
	}
	my_scanf("%d\n",&a[n-1]);
	my_scanf("%d",&k);
	for(i=0;i<=n-1;i++){
		if(a[i]!=k){
			if(b==0){
			  my_printf("%d",a[i]);
			  b+=1;
		    }
		    else{
		    	my_printf(" %d",a[i]);
		    }
		}
	}
	my_printf("\n");
	return 0;
} 