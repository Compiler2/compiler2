#include <header.h>

int main_bench()
{void qp(char *p,int n);
char a[105];int l;gets(a);l=strlen(a);
qp(a,l);my_printf("%c\n",a[0]+a[l-1]);
}
void qp(char *p,int n)
{if(n>=2){my_printf("%c",*p+p[1]);n--;
qp(p+1,n);}}
