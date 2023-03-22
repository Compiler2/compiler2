#define NUM_ITER 439380

#include <header.h>

int re(int n){
	int result=0;
	if(n>0){
	   while(n>0){
		  result=result*10+n%10;
		  n/=10;
	   }
	}else if(n<0){
		n=0-n;
		while(n>0){
		  result=result*10+n%10;
		  n/=10;
	   }
	   result=0-result;
	}
	return result;
}
int main_bench(){
	int i,z,f;
	for(i=0;i<6;i++){
		my_scanf("%d",&z);
		f=re(z);
		my_printf("%d\n",f);
	}
	return 0;
}