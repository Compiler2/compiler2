#define NUM_ITER 2497364

#include <header.h>

int main_bench()
{
	int a=20,b=40,c=10,d=50;
	char t[4]={'z','q','s','l'};
	my_printf("%c %d\n%c %d\n%c %d\n%c %d",t[3],d,t[1],b,t[0],a,t[2],c);
}
