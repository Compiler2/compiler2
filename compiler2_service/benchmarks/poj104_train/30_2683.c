#include <header.h>

int seven(int x){
	if(x%7==0){
		return 1;		
	}
	if(x%10==7){
		return 1;		
	}
	if(x-x%10==70){
		return 1;		
	}
	return 0;
}
int main_bench(){
	int n,i,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(seven(i)==0)
			sum+=i*i;
	}
	my_printf("%d",sum);
	return 0;
}