#include <header.h>

int main_bench(){
	int n,a[200],b[200],i,k,t,p;
	k=0;
	t=0;
	p=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			k++;
		}else if(a[i]==b[i]){
			t++;
		}else{
			p++;
		}
    }
	if(k>p){
		my_printf("A");
	}else if(k==p){
		my_printf("Tie");
	}else{
		my_printf("B");
	}
	return 0;
}

