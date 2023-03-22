#include <header.h>

int main_bench()
{
int num,i,j,sum=0,mark;
my_scanf("%d",&num);
for(i=1;i<=num;i++)
{
mark=1;j=i;
if(!(j%7)) mark=0;
while(j)
{
if(j%10==7){mark=0;break;}
else j/=10;
}
if(mark) sum+=i*i;
}
my_printf("%d",sum);
}