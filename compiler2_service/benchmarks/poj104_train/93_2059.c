#define NUM_ITER 1063993

#include <header.h>

int main_bench()
{
	int a;
	char b;
	b='n';
	my_scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0){
		my_printf("3 5 7");}
	else if(a%3==0&&a%5==0&&a%7!=0){
		my_printf("3 5\n");}
	else if(a%3==0&&a%5!=0&&a%7==0){
		my_printf("3 7\n");}
	else if(a%3!=0&&a%5==0&&a%7==0){
		my_printf("5 7\n");}
	else if(a%3==0&&a%5!=0&&a%7!=0){
		my_printf("3\n");}	
	else if(a%3!=0&&a%5!=0&&a%7==0){
		my_printf("7\n");}
	else if(a%3!=0&&a%5==0&&a%7!=0){
		my_printf("5\n");}
	else{
		my_printf("%c",b);}
	return 0;
}