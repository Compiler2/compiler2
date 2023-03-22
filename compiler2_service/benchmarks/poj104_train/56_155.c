#define NUM_ITER 1431028

#include <header.h>

int main_bench()
{   
	char str[10],a;
	int i=0,n;
	gets(str);
	char *p=str;
	do{
         i++;
		 p++;
		 a=*p;
	}while(a!='\0');
	n=i;
	char s[10];
	for(i=0;i<n;i++)s[i]=str[n-i-1];
	for(i=0;i<n;i++)my_printf("%c",s[i]);
    return 0;
}