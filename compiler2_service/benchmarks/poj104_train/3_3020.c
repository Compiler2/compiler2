#define NUM_ITER 46911

#include <header.h>

int main_bench(){
int n,k,i,j,a[1000],b[1000];
my_scanf("%d%d",&n,&k);
for(i=0;i<n;i++){
	my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	b[i]=a[i];
}
for(j=0;j<n;j++){
	for(i=0;i<n;i++){
		if(i==j){
			continue;
		}else if(k==a[j]+b[i]){
				my_printf("yes\n");
				break;
			}
		}
		if(k==a[j]+b[i]){
			break;
		}
	}
	if(k!=a[j]+b[i]){
		my_printf("no\n");
	}
     return 0;

}