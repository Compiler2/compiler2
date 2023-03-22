#define NUM_ITER 239010

#include <header.h>

int main_bench()
{
    char *c,*p,*p1;
    c=(char*)malloc(1000*sizeof(char));
    int a=0;
    p=c;
    gets(c);
    for(c=p;*c!='\0';c++)
    {
        if(*c>='0'&&*c<='9')
        {
            my_printf("%c",*c);
            a=1;
        }
        else if(a==1)
			for(p1=c;*p1!='\0';p1++)
				if(*p1>='0'&&*p1<='9')
				{ 
					my_printf("\n");
					a=0;
					break;
				}
    }
}