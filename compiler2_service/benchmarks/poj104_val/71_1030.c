#define NUM_ITER 20132

#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
int a,b,c;
int i;
for(i=0;i<n;i++)
{ my_scanf("%d%d%d",&a,&b,&c);
if ((a%4)!=0||(a%4)==0&&(a%100)==0&&(a%400)!=0)
{ if (b==9&&c==12||b==12&&c==9||b==4&&c==7||b==7&&c==4||b==1&&c==10||b==10&&c==1||b==2&&c==3||b==3&&c==2||b==2&&c==11||b==11&&c==2||b==3&&c==11||b==11&&c==3)
  my_printf("YES\n");
  else 
my_printf("NO\n");
}
else if ((a%4)==0&&(a%100)!=0||(a%400)==0)
{
if (b==9&&c==12||b==12&&c==9||b==4&&c==7||b==7&&c==4||b==1&&c==4||b==4&&c==1||b==1&&c==7||b==7&&c==1||b==2&&c==8||b==8&&c==2||b==3&&c==11||b==11&&c==3)
my_printf("YES\n");
else 
my_printf("NO\n");
}
}
return 0;
}