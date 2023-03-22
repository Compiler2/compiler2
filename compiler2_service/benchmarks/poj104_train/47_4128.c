#define NUM_ITER 48732

#include <header.h>

int main_bench(){
int n,i;
my_scanf("%d",&n);
int sz1[100],sz2[100];
for(i=0;i<n;i++){
	if(i<n-1){
my_scanf("%d ",&sz1[i]);
sz2[n-1-i]=sz1[i];
}else if(i==n-1){
	my_scanf("%d",&sz1[n-1]);
	sz2[0]=sz1[n-1];
	}
}
for(i=0;i<n;i++){
	if(i<n-1){
my_printf("%d ",sz2[i]);
	}else if(i==n-1){
	my_printf("%d",sz2[n-1]);
	}

}
return 0;
}