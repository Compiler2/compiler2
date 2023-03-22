#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int sum=0,j=1;
	for(j=1;j<=n;j++){
		if(j%7==0){
			continue;
		}
		if(j%10==7 || (int)j/10==7){
			continue;
		}
		sum+=j*j;
	}
	my_printf("%d",sum);
	return 0;
}