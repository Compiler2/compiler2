#include <header.h>

int main_bench()
{
int n,i,j=0;char a[10000],*p=a;
gets(a);
n=strlen(a);
for(p=a;;p++)
{
if (*p==' ')
     { if(*(p-1)!=' ')  {my_printf("%d,",j);j=0;}else goto z;}
else if(*p=='\0')  {my_printf("%d",j);break;}
      else  j=j+1;
z: ;
}
}
