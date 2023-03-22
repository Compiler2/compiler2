#include <header.h>

int main_bench(){
	int a,b,c,d,n,i,t;
	my_scanf("%d",&n);
	c=0;d=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		t=a-b;
		if(t==-1||t==2){
			c=c+1;
		}else if(t!=0){
			d=d+1;
		}
	}
	if(c>d){
		my_printf("A");
	}else if(c<d){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
	return 0;
}
