#define NUM_ITER 1260866

#include <header.h>



int main_bench()
{
	char s[101];
	char s1[101];
	char *p,*p1;
	int n,i;
	p=s;
	p1=s1;
	gets(s);
	n=strlen(s);
	for(i=0;i<n-1;i++){
	*(p1+i)=*(p+i)+*(p+i+1);}
	*(p1+n-1)=*(p+n-1)+*p;
	for(i=0;i<n;i++){
	my_printf("%c",*(p1+i));}
	return 0;
}