#define NUM_ITER 1553089

#include <header.h>

int main_bench()
{
char str[10000],*p;
int num=0;
gets(str);
for(p=str;*p!='\0';p++)
   {if(*p!=' ')
    num=num+1;
    else if(*p=' ' && num!=0)
	 {my_printf("%d,",num);
	  num=0;
	 }
	}
    my_printf("%d",num);
}
