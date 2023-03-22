#include <header.h>

int main_bench(){
	int n,i,a[200],b[2000],p=0,q=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]-b[i]==1){
			q+=1;
		}else if(a[i]-b[i]==2){
			p+=1;
		}else if(a[i]-b[i]==-1){
			p+=1;
		}else if(a[i]-b[i]==-2){
			q+=1;
		}else{
			p=p;
			q=q;
		}
	}
	if(p>q){
		my_printf("A");
	}else if(p<q){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
	return 0;
}