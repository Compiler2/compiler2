#define NUM_ITER 277959

#include <header.h>

int main_bench()
{
char* str;
int i,l;
str = (char *)malloc(1000 * sizeof(char));
gets(str);
l=strlen(str);
for(i=0;i<l;i++,str++)
{
	if(*str==' '&&*(str+1)==' ') i=i;
	else
	
		my_printf("%c",*str);
	
	
	}
return 0;
}