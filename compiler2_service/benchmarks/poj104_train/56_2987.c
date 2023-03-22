#include <header.h>

void change(char *);
int main_bench()
{
	char *p;
	p = (char*)malloc(5*sizeof(char));
	gets(p);
	
	change(p);
}
void change(char *q){
	char *q0 = q;
	if (*q=='\0') my_printf("\n");
	else {
        for (;*q!='\0';q++){}
		my_printf("%c",*(q-1));
		*(q-1)='\0';
		change(q0);
	}
}
