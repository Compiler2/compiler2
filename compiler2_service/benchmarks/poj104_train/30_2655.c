#define NUM_ITER 81024

#include <header.h>

int yu7wuguan(int num);
int main_bench(){
	int i,num;
	int result=0;
	my_scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(yu7wuguan(i)){
           result+=i*i;
		}
          }
		my_printf("%d",result);
			 return 0;
}
	int yu7wuguan(int num){
		if(num%7==0||num/10==7||num%10==7){
			return 0;
		}
		return 1;

	}