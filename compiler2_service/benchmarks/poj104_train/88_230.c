#define NUM_ITER 1034662

#include <header.h>

int main_bench()
{
	char *str,*p;
	str = (char *)malloc(30*sizeof(char));
	
	gets(str);
	
	for(p=str;*p!='\0';p++){
		if ((*p>'9'||*p<'0')&&(*(p+1)<='9'&&*(p+1)>='0')){
			my_printf("\n");
		}
		if ((*p)<='9'&&(*p)>='0') my_printf("%c",*p);
	}
}