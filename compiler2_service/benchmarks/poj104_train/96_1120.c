#define NUM_ITER 1233888

#include <header.h>

int main_bench()
{
char n[100];
int a[100],b[100],yu,i,j,x;
my_scanf("%s",n);
    x=strlen(n);
for (i=0;i<x;i++)
{
a[i]=n[i]-'0';}
if (x==1) my_printf("0\n%d",a[0]); else
if (x==2&&(a[0]*10+a[1]<13)) {my_printf("0\n%d",a[0]*10+a[1]);}
    else
{
b[0]=(10*a[0]+a[1])/13;
yu=(10*a[0]+a[1])%13;
if(b[0]!=0)
{
my_printf("%d",b[0]);
for (i=2;i<x;i++)
{
b[i-1]=(yu*10+a[i])/13;
yu=(yu*10+a[i])%13;	
}
for (i=1;i<x-1;i++)my_printf("%d",b[i]);
my_printf("\n%d",yu);
}
if (b[0]==0) 
{
b[0]=(100*a[0]+10*a[1]+a[2])/13;
yu=(100*a[0]+10*a[1]+a[2])%13;
my_printf("%d",b[0]);
for (i=3;i<x;i++)
{
b[i-2]=(yu*10+a[i])/13;
yu=(yu*10+a[i])%13;	
}
for(i=1;i<x-2;i++) my_printf("%d",b[i]);
my_printf("\n%d",yu);
}
}	
return 0;
}