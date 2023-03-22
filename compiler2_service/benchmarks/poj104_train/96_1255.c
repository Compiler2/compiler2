#define NUM_ITER 1057084

#include <header.h>

int main_bench()
{
char n[100];
int a,b[100],c[99],i,j,p,q;
my_scanf("%s",n);
a=strlen(n);
for(i=0;i<a;i++)
b[i]=n[i]-'0';
if(a==1)
{
my_printf("0\n");
my_printf("%d",b[0]);
}
else if(a==2&&10*b[0]+b[1]<13)
{
my_printf("0\n");
my_printf("%d",10*b[0]+b[1]);
}
else
{
p=10*b[0]+b[1];
for(i=0;i<a-2;i++)
{
c[i]=(p-p%13)/13;
p=(p%13)*10+b[i+2];
}
c[a-2]=(p-p%13)/13;
q=p%13;
for(i=0;i<a-1;i++)
{
if(i==0&&c[i]==0)
continue;
else if(i==a-2)
my_printf("%d\n",c[i]);
else
my_printf("%d",c[i]);
}
my_printf("%d",q);
}
}