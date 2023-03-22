#include <header.h>

int main_bench() 
{ 
int y, m, d; 
my_scanf("%d %d %d", &y,&m,&d); 
if(3 > m) 
{ 
m+= 12; 
y--; 
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==1)
{my_printf("Mon.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==2)
{my_printf("Tue.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==3)
{my_printf("Wed.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==4)
{my_printf("Thu.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==5)
{my_printf("Fri.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==6)
{my_printf("Sat.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==7)
{my_printf("Sun.");
}
return 0;
}
