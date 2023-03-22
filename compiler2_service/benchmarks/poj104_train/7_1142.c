#define NUM_ITER 666332

#include <header.h>

int main_bench()
{int n,i,j,k,a,b,c;
c=0;
char t[256]={0};
char s[256]={0};
char r[256]={0};
char z[256]={0};
my_scanf("%s %s %s",t,s,r);
a=strlen(t);
b=strlen(s);
for(i=0;i<=a-b;i++)
{for(j=i;j<b+i;j++)
z[j-i]=t[j];
if(strcmp(z,s)==0)
{c=i;
break;
}
}
if(c==0)
{for(i=0;i<a;i++)
my_printf("%c",t[i]);}
else
{for(i=0;i<c;i++)
my_printf("%c",t[i]);
my_printf("%s",r);
for(j=c+b;j<a;j++)
my_printf("%c",t[j]);
}
return 0;
}
