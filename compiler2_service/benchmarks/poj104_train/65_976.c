#include <header.h>

int main_bench(){
	int n,a=0,b=0,i,c,d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&c,&d);
		if((c-d)==-1||(c-d)==2){
			a++;
		}else if((d-c)==-1||(d-c)==2)
			b++;
	}
    if(a>b)
		my_printf("A");
	else if(b>a)
	my_printf("B");
    else
		my_printf("Tie");
	return 0;
}