#include <header.h>

int main_bench(){
	int n,i,c=0,d=0;
	int a[200],b[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
    for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			c++;
		}
		if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0)){
			d++;
		}
	}
	if(c>d){
		my_printf("A");
	}
	if(c==d){
		my_printf("Tie");
	}
	if(c<d){
		my_printf("B");
	}
	return 0;
}

