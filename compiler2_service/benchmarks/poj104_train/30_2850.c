#include <header.h>

int yuqiwuguan(int number){
	if(number%7==0){
		return 0;}
	for(int num=number;num>0;num=num/10){
		if(num%10==7){
			return 0;
		}
		
	}
	return 1;
}

int main_bench(){
	int i,sum,n;
	sum=0;
	my_scanf ("%d",&n);
	for(i=1;i<=n;i++){
		if (yuqiwuguan(i)){
			sum=sum+i*i;
		}
	}
	my_printf("%d",sum);
	return 0;
}