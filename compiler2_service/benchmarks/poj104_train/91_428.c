#define NUM_ITER 1203777

#include <header.h>

int main_bench()
{
	int i,j,l;
	char s[102],a[102];
	gets(s);
	l=strlen(s);
	for(j=0;j<l-1;j++){
		a[j]=s[j]+s[j+1];
	}
	a[l-1]=s[0]+s[l-1];
	for(i=0;i<l;i++)
		s[i]=a[i];
	for(i=0;i<l;i++)
		my_printf("%c",s[i]);

		return 0;
}