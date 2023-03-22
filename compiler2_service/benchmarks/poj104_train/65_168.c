#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int a,b,A=0,B=0;
	for(int i=0;i<n;i++){
		my_scanf("%d%d\n",&a,&b);
        if(a<b){
			if(b-a==1){
		     A++;
			}else{
				B++;}}
		else if(a>b){
				if(a-b==1){
		     B++;
			}else{
				A++;}}
		else if(a=b){A=A;B=B;}
	}
	if(A>B){
		my_printf("A");}
	else if(A<B){
		my_printf("B");}
	else if(A=B){
		my_printf("Tie");}
	return 0;
}