#define NUM_ITER 88152

#include <header.h>

int main_bench()
{
int a,b,c,i,x=0,y=0;
my_scanf("%d%d%d",&a,&b,&c);
if ((a%4==0&&a%100!=0)||a%400==0)
{x=1;}
a%=400;
if (a==0)
{y=5;}
else
{
for(i=1;i<=a-1;i++)
{
if(i%4==0&&i%100!=0)
{y+=2;}
else
{y++;}
}
y%=7;
}
for(i=1;i<=b-1;i++)
{
if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
{y+=31;}
else if(i==4||i==6||i==9||i==11)
{y+=30;}
else if(x==1)
{y+=29;}
else 
{y+=28;}
}
y=(y+c)%7;
switch(y)
{
case 1:
{
my_printf("Mon.");
break;
} 
case 2:
{
my_printf("Tue.");
break;
} 
case 3:
{
my_printf("Wed.");
break;
} 
case 4:
{
my_printf("Thu.");
break;
} 
case 5:
{
my_printf("Fri.");
break;
} 
case 6:
{
my_printf("Sat.");
break;
} 
case 0:
{
my_printf("Sun.");
break;
} 
}
return 0;
}

