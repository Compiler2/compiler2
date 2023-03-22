#define NUM_ITER 7148

#include <header.h>

int main_bench()
{ 
int i,j,n,y,m1,m2,b,t,s,a[12]={0,31,28,31,30,31,30,31,31,30,31,30,31};
my_scanf("%d",&n);
for(i=1;i<=n;i++)
{b=0;
my_scanf("%d%d%d",&y,&m1,&m2);
if(y%4==0&&y%100!=0||y%400==0)
{b=1;}
if(m1>m2)
{t=m1;
m1=m2;
m2=t;}
s=0;
for(j=m1;j<=m2-1;j++)
{s+=a[j];
if(j==2&&b==1)
{s++;}}
if(s%7==0)
{my_printf("YES\n");}
else
{my_printf("NO\n");}}
return 0;
}