#include <header.h>

int main_bench(){
	int n,m;
	my_scanf("%d",&n);
         if(!(n==1)){
	  do{
		if(n%2==0){
			m=n/2;
			my_printf("%d/2=%d\n",n,m);
		}else{
			m=n*3+1;
			my_printf("%d*3+1=%d\n",n,m);
		}
		n=m;
	  }
	  while(!(n==1));
         }
	my_printf("End");
	return 0;
}