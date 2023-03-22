#include <header.h>

int main_bench()
{
    int a,x,y,z,n,b,place;
    my_scanf("%d",&a);
	if(a>9999)
		place=5;
if(a>999)
		place=4;
else if(a>999)
		place=4;
else if(a>99)
		place=3;
else if(a>9)
		place=2;
else place=1;
    n=a/1000;
	x=a/100%10;
    y=a/10%10;
    z=a%10;
switch(place)
{case 5:my_printf("00001");
         break;
case 4:my_printf("%d%d%d%d",z,y,x,n);
 break;

case 3:my_printf("%d%d%d",z,y,x);
 break;

case 2:my_printf("%d%d",z,y);
 break;
case 1:my_printf("%d",z);
 break;

}

}
