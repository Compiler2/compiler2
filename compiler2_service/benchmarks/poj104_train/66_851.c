#include <header.h>

int main_bench(){
int n,y,r,i,result=0,s;
my_scanf("%d %d %d",&n,&y,&r);
s=(n-1)%400+1;
for(i=1;i<s;i++)
{if(i%4==0&&i%100!=0||i%400==0)
{result+=2;}
else result++;}
for(i=1;i<y;i++)
{if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
{result+=3;}
if(i==4||i==6||i==9||i==11)
{result+=2;}
if(i==2)
{if(n%4==0&&n%100!=0||n%400==0)
{result++;}
}
}
result+=r;
if(result%7==0){my_printf("Sun.");}
if(result%7==1){my_printf("Mon.");}
if(result%7==2){my_printf("Tue.");}
if(result%7==3){my_printf("Wed.");}
if(result%7==4){my_printf("Thu.");}
if(result%7==5){my_printf("Fri.");}
if(result%7==6){my_printf("Sat.");}
return 0; 
}
