#define NUM_ITER 13088

#include <header.h>

int main_bench()
{
int a,b,c,d,A,B,C,D,E,i;
for(i=1;i<=100;i++)
{
my_scanf("%d %d %d %d %d %d",&a,&b,&c,&A,&B,&C);
if(a==0&&b==0&&c==0&&A==0&&B==0&&C==0)
{break;}
D=a*3600+b*60+c;
E=(A+12)*3600+B*60+C;
my_printf("%d\n",E-D);
}
return 0;
}
