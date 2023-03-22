#define NUM_ITER 16082

#include <header.h>

int issushu(int number);
int main_bench(){
int n,i;
int s=0;
my_scanf("%d",&n);
for(i=3;i+2<=n;i=i+2){
	int p=0;
	if(issushu(i)){
		if(issushu(i+2)){
		s=i;
		p=i+2;
		my_printf("%d %d\n",s,p);
		}
		}
}
if(s==0){
my_printf("empty");
}
return 0;
}

int issushu(int number){
int i;
for(i=2;i<number;i++){
	if(number%i==0){
	return 0;
	}
}
return 1;
}
