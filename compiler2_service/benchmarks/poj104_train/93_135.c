#include <header.h>

int main_bench()
{
    int d,m=0;
	my_scanf("%d",&d);
    if(d%3==0){
	my_printf("3");
	m++;}
if(d%5==0){
	if(m==1) my_printf(" ");
	my_printf("5");
	m++;}
if(d%7==0){
    if(m!=0) my_printf(" ");
	my_printf("7");
	m++;}
if(m==0){
  my_printf("n");
}
	return 0;
}