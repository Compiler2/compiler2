#define NUM_ITER 275102

#include <header.h>

int main_bench()
{
	char *p,*p_1,*p2;
	p=(char*)malloc(1000*sizeof(char));
	p_1=p;
    gets(p);;
	for(p=p_1;*p!='\0';p++)
		if(*p==' ')
			if(*(p2=(p+1))==' ')
			{
				for(;*p2!='\0';p2++)
					*p2=*(p2+1);
				p--;
			}
	for(p=p_1;*p!='\0';p++)
		my_printf("%c",*p);
}
