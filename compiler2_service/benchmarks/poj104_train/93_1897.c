#include <header.h>

int main_bench()
{
 int a;
 char b='3';
 char c='5';
 char d='7';
 char e='n';

 my_scanf("%d", &a);
 if(a%3==0 && a%5==0 && a%7==0)
	 my_printf("%s","3 5 7");
 else if(a%3==0 && a%5==0)
	 my_printf("%s","3 5");
 else if(a%5==0 && a%7==0)
	 my_printf("%s", "5 7");
 else if(a%3==0 && a%7==0)
	 my_printf("%s", "3 7");
 else if(a%3==0)
	 my_printf("%c",b);
 else if(a%5==0)
	 my_printf("%c",c);
 else if(a%7==0)
	 my_printf("%c",d);
 else
	 my_printf("%c",e);
 
 return 0;

}