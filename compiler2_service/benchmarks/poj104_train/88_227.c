#include <header.h>

int pd(char *m)
{
	if(*m>='0'&&*m<='9') return(1);
	else return (0);
}
int main_bench()
{
	char *p,*a;
	p=(char*)malloc(1000*sizeof(char));
	gets(p);
	for(a=p;*a!='\0';a++)
	{
       if(pd(a)) my_printf("%c",*a);
	   else if(pd(a-1)&&(pd(a)!=1))
		   my_printf("\n");
	   }
}
    