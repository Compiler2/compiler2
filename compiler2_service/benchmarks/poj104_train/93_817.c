#define NUM_ITER 1827015

#include <header.h>

int main_bench()
{
	int a,b,c,n;
	my_scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a==0&&b==0&&c==0){
		my_printf("3 5 7");}
	if(a==0&&b==0&&!c==0){
		my_printf("3 5");}
	if(a==0&&c==0&&!b==0){
		my_printf("3 7");}
	if(b==0&&c==0&&!a==0){
		my_printf("5 7");}
	if(a==0&&!b==0&&!c==0){
		my_printf("3");}
	if(b==0&&!a==0&&!c==0){
		my_printf("5");}
	if(c==0&&!b==0&&!a==0){
		my_printf("7");}
	if(!c==0&&!b==0&&!a==0){
		my_printf("n");}
return 0;
			}