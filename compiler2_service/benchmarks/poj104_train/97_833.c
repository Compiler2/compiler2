#include <header.h>


int main_bench()
{
int n;
my_scanf("%d",&n);
int a,b,c,d,e,f;

a=(n-n%100)/100;
b=((n-a*100)-(n-a*100)%50)/50;
if((n-a*100-b*50)>=20)
{
	c=((n-a*100-b*50)-(n-a*100-b*50)%20)/20;
	d=((n-a*100-b*50-c*20)-(n-a*100-b*50-c*20)%10)/10;
}
else if(((n-a*100-b*50)<20)&&((n-a*100-b*50)>=10))
{c=0;
d=((n-a*100-b*50)-(n-a*100-b*50)%10)/10;
}else if(((n-a*100-b*50)<10))
{
c=0;
d=0;
}



if((n-a*100-b*50-c*20-d*10)>=5)
{
e=((n-a*100-b*50-c*20-d*10)-(n-a*100-b*50-c*20-d*10)%5)/5;
f=n-a*100-b*50-c*20-d*10-e*5;
}
else if((n-a*100-b*50-c*20-d*10)<5){e=0;f=f=n-a*100-b*50-c*20-d*10-e*5;}

my_printf("%d\n",a);my_printf("%d\n",b);my_printf("%d\n",c);my_printf("%d\n",d);my_printf("%d\n",e);my_printf("%d\n",f);


return 0;
}