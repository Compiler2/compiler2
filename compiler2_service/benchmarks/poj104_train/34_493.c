#include <header.h>

int main_bench(){
	int i,j,n,sz[10000],a,b=0;
    my_scanf("%d",&a);
	while(a!=1){
		if(a%2==0){
			b=a;
			a=a/2;
			my_printf("%d/2=%d\n",b,a);
		}else{
			b=a;
			a=a*3+1;
			my_printf("%d*3+1=%d\n",b,a);
		}
	}
	my_printf("End\n");
	return 0;
}