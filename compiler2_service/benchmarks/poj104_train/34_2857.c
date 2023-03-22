#include <header.h>

int main_bench(){
int n,m,i;
my_scanf("%d",&n);
if(n==1){
my_printf("End");
}else{
for(i=1;n!=1;i++){
	m=n;
	if(n%2!=0){
	n=n*3+1;
	my_printf("%d*3+1=%d\n",m,n);
	}else if(n%2==0){
	n=n/2;
	my_printf("%d/2=%d\n",m,n);
	}
	if(n==1){
	my_printf("End");
	}
}
}
return 0;
}