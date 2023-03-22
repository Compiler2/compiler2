#define NUM_ITER 1277265

#include <header.h>

int main_bench()
{
	char str[1000],*p;
	p=str;
	int n,i,k=0;
	gets(str);
	n=strlen(str);
	str[n]=' ';
	for(i=0;i<=n;i++)
	{if(*(p+i)!=' ') k+=1;
	else {if(i<n&&k!=0) my_printf("%d,",k);if(i==n&&k!=0) my_printf("%d",k);k=0;}}
	return 0;
}