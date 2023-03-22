#include <header.h>

int reserve(int num)
{
int x,y;
y=0;
if(num==0) return 0;
while(num!=0)
{
x=num%10;
y=y*10+x;
num=(num-x)/10;
}
return y;
}
int main_bench()
{
int z,i;
for(i=1;i<=6;i++)
{
my_scanf("%d",&z);
my_printf("%d\n",reserve(z));
}
}


