#define NUM_ITER 81030

#include <header.h>

int main_bench(){
int a,b, c, d;
c=0;
my_scanf("%d",&a);
for(b=1;b<=a;b++){
	if(b%7!=0)
		if(b%10!=7)
		  if(b/10!=7){
			c=c+b*b;}
}
my_printf("%d",c);
}