#include <header.h>

int main_bench()
{
	int n,i;
	int A,B;
	int a=0,b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&A,&B);
		if((A==0&&B==1)||(A==1&&B==2)||(A==2&&B==0)){
			a++;
			continue;
		}
		if(A==B){
			a++;
			b++;
			continue;
		}
		else{
			b++;
			continue;
		}
	}
	if(a>b){
		my_printf("A\n");
		return 0;
	}
	if(a==b){
		my_printf("Tie\n");
		return 0;
	}
	if(a<b){
		my_printf("B\n");
	return 0;}
		
	return 0;
}
