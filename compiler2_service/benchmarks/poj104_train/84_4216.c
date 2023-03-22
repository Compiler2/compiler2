#define NUM_ITER 62593

#include <header.h>

int main_bench(){
	int n,a,b,i,num;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
	my_scanf("%d",&num);
	   if(i==1){
	        a=num;
			b=num;
	  
	  }else if(num>a){
		   b=a;
			a=num;
		}else if((a>num)&&(num>b)){
			b=num;
		}
	
	}
my_printf("%d\n%d\n",a,b);
	return 0;
}