#include <header.h>

int main_bench(){
	int n,i;
	int p=0,q=0;
	int a[101],b[101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==0){
			if(b[i]==0){
				p++;
				q++;
			}else if(b[i]==1){
				p++;
			}else if(b[i]==2){
				q++;
			}
		}else if(a[i]==1){
			if(b[i]==0){
				q++;
			}else if(b[i]==1){
				p++;
				q++;
			}else if(b[i]==2){
				p++;
			}
		}else if(a[i]=2){
			if(b[i]==0){
				p++;
			}else if(b[i]==1){
				q++;
			}else if(b[i]==2){
				p++;
				q++;
			}
		}
	}
	if(p==q){
		my_printf("Tie");
	}else if(p>q){
		my_printf("A");
	}else if(p<q){
		my_printf("B");
	}
	return 0;
}