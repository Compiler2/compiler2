#define NUM_ITER 1085117

#include <header.h>

main_bench()
{
int c,l,i,d;
int b[100];
char a[100];
my_scanf("%s",a);
l=strlen(a);
if(l==1)
{
my_printf("%d\n",0);
my_printf("%c\n",a[0]);
}
else
{              
for(i=1;i<=l-1;i++)
{
d=10*(a[i-1]-'0')+a[i]-'0';
b[i-1]=d/13;
a[i]=d%13+'0';      
}
c=a[l-1]-'0';
if(l==2)
{
my_printf("%d\n",b[0]);
my_printf("%d\n",c);      
}
else
{
if(b[0]==0)
{
for(i=1;i<=l-3;i++)
my_printf("%d",b[i]);
my_printf("%d\n",b[l-2]);
my_printf("%d\n",c);
}
else
{
for(i=1;i<=l-2;i++)
my_printf("%d",b[i-1]);
my_printf("%d\n",b[l-2]);
my_printf("%d\n",c);
}
}
}
getchar();
getchar();           
}