#include <header.h>

int main_bench(){
	int a[200],n,i,b[200],s=0,t=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==0){
			if(b[i]==1){
				s++;
			}else if(b[i]==2){
				t++;
			}
		}else if(a[i]==1){
			if(b[i]==2){
				s++;
			}else if(b[i]==0){
				t++;
			}

		}else{
			if(b[i]==0){
				s++;
			}else if(b[i]==1){
				t++;
			}
		}
	}
	if(s>t){
		my_printf("A");
	}else if(s<t){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
	

			


	return 0;
}
