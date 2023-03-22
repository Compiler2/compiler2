#include <header.h>

int main_bench()
{
	int i,j,k,m,n,*rslt;
	char w1[60],w2[60],*p1,*p2;
	my_scanf("%s %s",w1,w2);
	p1=w1;
	p2=w2;
	rslt=strstr(p2,p1);
	m=p2;
	n=rslt;
	my_printf("%d",(n-m));
}