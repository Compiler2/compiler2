#define NUM_ITER 61096

#include <header.h>

int main_bench()
{
 int n,b;
 int w=0;
 int q=0;
 int i=1;
 my_scanf("%d",&n);
 while(i<=n){
	 my_scanf("%d",&b);
	 if(b>=w){
		 q=w;
		 w=b;
	 }else{
		 if(b<w&&b>=q){
			 w=w;
			 q=b;
		 }
	 }
	 i++;
 }
 my_printf("%d\n%d\n",w,q);
 return 0;
}