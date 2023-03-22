#define NUM_ITER 39014

#include <header.h>

int main_bench(){
	int i,n,a[101],b[101],t=0,max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){ 
		if((a[i]>=90&&a[i]<=140)&&(b[i]>=60&&b[i]<=90)){
		t++;
		}
		else{
			t=0;
		}
		if(t>max){
		max=t;
		}
	}
	my_printf("%d",max);
return 0;
}
