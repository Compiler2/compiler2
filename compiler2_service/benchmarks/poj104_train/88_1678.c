#define NUM_ITER 1559685

#include <header.h>

int main_bench()
{char s[32];
char *t=s;
int b;
gets(s);
for(;(*t)!='\0';t++)
{if((b=*t)>47&&(b=*t)<58)
{my_printf("%c",*t);
continue;}
else if((b=*(t-1))>47&&(b=*(t-1))<58)
{my_printf("\n");
continue;}
}
return 0;
}