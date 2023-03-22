#include <header.h>

int main_bench()
{
char a[100];
int b[99],d[99];
int m,i,n=0;
my_scanf("%s",a);
m=strlen(a);
if(m==1)
{my_printf("0\n%d",(a[0]-'0'));}
else 
if(m==2)
{my_printf("%d\n%d",(10*(a[0]-'0')+(a[1]-'0')-(10*(a[0]-'0')+(a[1]-'0'))%13)/13,(10*(a[0]-'0')+(a[1]-'0'))%13);}
else
{d[0]=((a[0]-'0')*10+(a[1]-'0'))%13;
b[0]=((a[0]-'0')*10+(a[1]-'0')-d[0])/13;
for(i=1;i<=m-2;i++)
{d[i]=(d[i-1]*10+(a[i+1]-'0'))%13;
b[i]=(d[i-1]*10+(a[i+1]-'0')-d[i])/13;}
if(b[0]!=0)
my_printf("%d",b[0]);
for(i=1;i<=m-3;i++)
my_printf("%d",b[i]);
my_printf("%d\n",b[m-2]);
my_printf("%d",d[m-2]);}
}