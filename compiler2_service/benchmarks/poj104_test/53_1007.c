#define NUM_ITER 3985

#include <header.h>

int main_bench(){
	int n,a[300],b[300],i,j,x=1,y=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				break;
			}
			if(j==(i-1)){
				x++;
			}
		}

	}

	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				break;
			}
			if((j==(i-1))&&(y<(x-1))){
				my_printf("%d,",a[i]);
				y++;
			}
			else if((j==(i-1))&&(y==(x-1))){
				my_printf("%d",a[i]);
			}
		}
		if(i==0){
			my_printf("%d,",a[0]);
		}
	}

	return 0;
}