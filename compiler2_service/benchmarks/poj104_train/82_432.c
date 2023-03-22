#include <header.h>

int main_bench(){
	int n,xue,shu,i,h[500],e;
	my_scanf("%d",&n);
	h[0]=0;
	for(i=1;i<=n;i++){
		my_scanf("%d %d",&xue,&shu);
		if(xue>=90&&xue<=140&&shu>=60&&shu<=90){
			h[i]=h[i-1]+1;
		}else{
			h[i]=0;
		}
	}
	e=h[0];
	for(i=1;i<=n;i++){
		if(e<h[i]){
			e=h[i];
		}
	}
	my_printf("%d",e);
	return 0;
}