#define NUM_ITER 421677

#include <header.h>


int main_bench(){
	int reverse(int num);
	int i,num,a;
	for(i=0;i<6;i++){
		my_scanf("%d",&num);
		a=reverse(num);
		my_printf("%d\n",a);
	}
	return 0;
}
int reverse(int num){
	int z=0,a,i,j;
	if(num>=0){
		for(i=0;i<10;i++){
			a=num%10;
			num=num/10;
			z=z*10+a;
			if(num==0){
				break;
			}
		}
	}
	else{
		num=-num;
		for(j=0;j<32;j++){
			a=num%10;
			num=num/10;
			z=z*10+a;
			if(num==0){
				break;
			}
		}
		z=-z;
	}
	return z;	
}