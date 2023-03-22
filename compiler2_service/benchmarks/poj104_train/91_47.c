#define NUM_ITER 1288656

#include <header.h>


int main_bench()
{
	int n,i,l,a,t,k;
	char s[101],b[101],*p,*q;
	gets(s);
	l=strlen(s);
	for(p=s,q=b;p<s+l-1;p++,q++){
		*q=*p+*(p+1);
	}
	*q=*p+s[0];
	for(q=b;q<b+l;q++){
		my_printf("%c",*q);
	}
	return 0;
}