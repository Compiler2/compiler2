#include <header.h>

int f(char *p);
int main_bench()
{
for(;;)
{char a[11],b[4];
int n,i;
my_scanf("%s",a);
my_scanf("%s",b);
if(a[0]=='\0')
break;
n=f(a);
for(i=0;i<=n;i++)
my_printf("%c",*(a+i));
for(i=0;i<=2;i++)
my_printf("%c",*(b+i));
for(i=n+1;*(a+i)!='\0';i++)
my_printf("%c",*(a+i));
my_printf("\n");
a[0]='\0';

}


}

int f(char *p)
{int i,max=0,t;
	for(i=0;*(p+i)!='\0';i++)
	{if(*(p+i)>max)
	{max=*(p+i);
	 t=i;
	}
	}
return t;

}
