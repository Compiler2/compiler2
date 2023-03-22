#include <header.h>

int main_bench(){
	int n,i,j,k;
	int a,b,c,d,e,f;
while(1){
my_scanf("%d",&a);my_scanf("%d",&b);my_scanf("%d",&c);
my_scanf("%d",&d);my_scanf("%d",&e);my_scanf("%d",&f);
	if(a==0)break;
	d=12+d;
	if(f<c){
		f=f+60;
		e--;
	}
	if(e<b){
		e+=60;
		d--;
	}
	k=(d-a)*3600+(e-b)*60+(f-c);
	my_printf("%d\n",k);
}






	return 0;
}