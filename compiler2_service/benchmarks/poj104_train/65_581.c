#define NUM_ITER 34069

#include <header.h>

int main_bench(){
	int i,n,a[200],b[200],y=0,k=0;
    my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0){
			if(b[i]==0){
				y++;
				k++;
			}else if(b[i]==1){
				y++;
			}else if(b[i]==2){
				k++;
			}
		}else if(a[i]==1){
			if(b[i]==0){
				k++;
			}else if(b[i]==1){
				y++;
				k++;
			}else if(b[i]==2){
				y++;
			}
		}else if(a[i]==2){
			if(b[i]==0){
				y++;
			}else if(b[i]==1){
				k++;
			}else if(b[i]==2){
				y++;
				k++;
			}
		}
	}
	if(y>k)
		my_printf("A");
	else if(y==k)
		my_printf("Tie");
	else if(y<k)
		my_printf("B");


	return 0;
}