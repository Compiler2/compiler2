#include <header.h>

int main_bench(){
	int i,n,s=0,f=0,p=0,a,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		if(a-b==-1||a-b==2){
			s++;
		}
		if(a-b==0){
			p++;
		}
		if(a-b==1||a-b==-2){
			f++;
		}
	}
	if(s==f){
		my_printf("Tie");
	}
	if(s>f){
		my_printf("A");
	}
	if(s<f){
		my_printf("B");
	}
	return 0;
}


