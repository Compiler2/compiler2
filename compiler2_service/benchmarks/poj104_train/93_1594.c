#define NUM_ITER 1546525

#include <header.h>

int max(int a,int b){
	if(a>b) return a;
	else return b;
}
int min(int a,int b){
    if(a>b) return b;
	else return a;
}
int main_bench(){
	int n,count=0,i=0,a[3]={0,0,0};
	my_scanf("%d",&n);
	if(n%3==0){
		count++;a[count-1]=3;i=3;}
	if(n%5==0){
		count++;a[count-1]=5;i=5;}
	if(n%7==0){
		count++;a[count-1]=7;i=7;}
	if(count==0)
		my_printf("n");
	if(count==1)
		my_printf("%d",i);
	if(count==2)
		my_printf("%d %d",min(a[0],a[1]),max(a[0],a[1]));
	if(count==3)
		my_printf("3 5 7");
	return 0;
}