#define NUM_ITER 1274418

#include <header.h>

int main_bench()
{
	char str[1000],str1[1000];
	int a[122],i,l;
	gets(str);
	l=strlen(str);
	for (i=0;i<l-1;i++)
		str1[i]=str[i]+str[i+1];
	str1[l-1]=str[l-1]+str[0];
	for (i=0;i<l;i++)
		my_printf("%c",str1[i]);
	return 0;
}
