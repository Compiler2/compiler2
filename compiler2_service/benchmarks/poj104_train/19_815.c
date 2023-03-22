#include <header.h>

int main_bench()
{char *a,*b,*s,*p,*t;
s=(char *)malloc(100*sizeof(char));
a=(char *)malloc(100*sizeof(char));
b=(char *)malloc(100*sizeof(char));
gets(s);
gets(a);
gets(b);
for(;;s++)
{p=a;
 t=s;
while(*s==*p&&*s!=' '&&*s!='\0')
{p++;
s++;}
if(*s==' '&&*p=='\0')
{my_printf("%s",b);
my_printf(" ");
continue;
}
else if(*s=='\0'&&*p=='\0')
{my_printf("%s",b);
break;
}
while(*s!=' '&&*s!='\0')
s++;
if(*s==' ')
{for(;*t!=' ';t++)
my_printf("%c",*t);
my_printf(" ");
}
if(*s=='\0')
{for(;*t!='\0';t++)
my_printf("%c",*t);
break;
}
}


}












