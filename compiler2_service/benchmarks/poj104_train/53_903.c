#define NUM_ITER 6191

#include <header.h>

int main_bench(){
	int n,a[100],i,b[100],j;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		}
	b[0]=a[0];
	my_printf("%d",b[0]);
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				a[i]=0;}
		}
}
	for(i=1;i<n;i++){
		if(a[i]!=0){
			my_printf(",%d",a[i]);}
		}
	return 0;
}	
