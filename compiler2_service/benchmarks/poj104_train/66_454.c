#include <header.h>

int main_bench()
{
int a,b,c,m,n,j,k,sum;
sum=0;
my_scanf("%d%d%d",&a,&b,&c);
m=(a-1)/4;
n=(a-1)/100;
k=(a-1)/400;
sum+=1*(a-1)+m+k-n;
for(j=1;j<b;j++)
{
if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
sum+=3;
if(j==4||j==6||j==9||j==11)
sum+=2;
if(a%4==0&&a%100!=0&&j==2)
sum+=1;
if(a%400==0&&j==2)
sum+=1;
else
sum+=0;
}
sum+=c;
if(sum%7==0)
my_printf("Sun.");
if(sum%7==1)
my_printf("Mon.");
if(sum%7==2)
my_printf("Tue.");
if(sum%7==3)
my_printf("Wed.");
if(sum%7==4)
my_printf("Thu.");
if(sum%7==5)
my_printf("Fri.");
if(sum%7==6)
my_printf("Sat.");
return 0;
}
