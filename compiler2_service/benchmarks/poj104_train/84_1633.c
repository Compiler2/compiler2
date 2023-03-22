#define NUM_ITER 61138

#include <header.h>

int main_bench(){
int a,b=0,c=0,d,e,i=1;
my_scanf("%d",&a);
while(i<=a){
	my_scanf("%d",&d);
	if(b<=d){
        e=b;
		b=d;
	}
	if(b>d){
		if(c<d){
		c=d;
		}
	
	}
	i++;
}
if(e>c){
	c=e;
}
my_printf("%d\n%d\n",b,c);
return 0;
}