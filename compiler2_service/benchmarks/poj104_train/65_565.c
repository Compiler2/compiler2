#include <header.h>

int main_bench(){
	int n,i,a[200],b[200];
	int c=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		if(a[i]-b[i]==1||a[i]-b[i]==-2){
			c++;
		}
		if(a[i]-b[i]==-1||a[i]-b[i]==2){
			c--;
		}
	}
	if(c==0){
		my_printf("Tie");
	}
	if(c>0){
		my_printf("B");
	}
	if(c<0){
		my_printf("A");
	}
	


	return 0;
}
