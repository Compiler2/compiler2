#include <header.h>


int main_bench()
{
	char *s = (char*)malloc(101*sizeof(char));
	gets(s);
	int i=0;
	for(i=0;i<strlen(s);i++){
		if(i<strlen(s)-1)
			my_printf("%c",(char)(*(s+i)+*(s+i+1)));
		else
			my_printf("%c\n",(char)(*(s+i)+*s));
	}

	return 0;
}