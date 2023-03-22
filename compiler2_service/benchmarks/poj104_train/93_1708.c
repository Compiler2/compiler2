#include <header.h>

int main_bench()
{
	int a,m,p,j;
	char t='n';
	m=3;p=5;j=7;
	my_scanf("%d",&a);
	if(a%3==0 && a%5==0 && a%7==0) my_printf("%d %d %d",m,p,j);
	else if(a%3!=0 && a%5!=0 && a%7!=0)  my_printf("%c",t);
	else if(a%3==0 && a%5==0 && a%7!=0) my_printf("%d %d",m,p);
	else if(a%3==0 && a%5!=0 && a%7==0) my_printf("%d %d",m,j);
	else if(a%3!=0 && a%5==0 && a%7==0) my_printf("%d %d",p,j);
	else if(a%3==0) my_printf("%d",m);
	else if(a%5==0) my_printf("%d",p);
	else if(a%7==0) my_printf("%d",j);my_printf("\n");
}
