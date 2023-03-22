#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
for(int i=1;;i++){
if(n!=1){
	if(n%2!=0){
		n=3*n+1;
	my_printf("%d*3+1=%d\n",(n-1)/3,n);
	}
	if(n%2==0){
		n=n/2;
	my_printf("%d/2=%d\n",2*n,n);
	}
	}
else
break;
}
my_printf("End");
	return 0;
}
