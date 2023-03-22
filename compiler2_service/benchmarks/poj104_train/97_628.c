#define NUM_ITER 1849787

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	 int i,a,b,c,d,e;
	 for(i=0;n-100>=0;i++){
		 n=n-100;
	 }
	 
	 for(a=0;n-50>=0;a++){
		 n=n-50;
	 }
 
	 for(b=0;n-20>=0;b++){
		 n=n-20;
	 }
	 for(c=0;n-10>=0;c++){
		 n=n-10;
	 }
	 for(d=0;n-5>=0;d++){
		 n=n-5;
	 }
	 for(e=0;n-1>=00;e++){
		 n=n-1;
	 }
	 my_printf("%d\n%d\n%d\n%d\n%d\n%d",i,a,b,c,d,e);
	 return 0;
}
