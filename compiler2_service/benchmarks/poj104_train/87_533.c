#define NUM_ITER 12487

#include <header.h>

int main_bench()
{
int i,n;
int m=0;
for(i=0;i<n;i++){
int a,b,c,d,e,f;
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(m==c+d+e)
  break;
if(a==0)
  break;
int g=0;
int h=0;
int i=0;
int j=0;
m=c+d+e;
g=f+60-c;
h=e+60-1-b;
i=d+12-1-a;
j=i*3600+h*60+g;
my_printf("%d\n",j);}
return 0;
}