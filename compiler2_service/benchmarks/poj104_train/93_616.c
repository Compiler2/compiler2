#define NUM_ITER 1988897

#include <header.h>

int main_bench(){
	int n,a,b,c;
	my_scanf("%d",&n);
a=n%3;
b=n%5;
c=n%7;
if(a==0&&b==0&&c==0){
	my_printf("%d %d %d",3,5,7);
}else if(a==0&&b!=0&&c!=0){
	my_printf("%d",3);
}else if(b==0&&a!=0&&c!=0){
	my_printf("%d",5);
}else if(c==0&&b!=0&&a!=0){
	my_printf("%d",7);
}else if(a==0&&b==0&&c!=0){
	my_printf("%d %d",3,5);
}else if(a==0&&b!=0&&c==0){
	my_printf("%d %d",3,7);
}else if(a!=0&&b==0&&c==0){
	my_printf("%d %d",5,7);
}else {
	my_printf("n");
}
return 0;
}