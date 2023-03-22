#define NUM_ITER 2201

#include <header.h>

int a,b,i,j,t,c[20],d[20],e[40];
void in()
{
my_scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
my_scanf("%d",&c[i]);
for(i=0;i<b;i++)
my_scanf("%d",&d[i]);
}

void order()
{
 for(i=0;i<a-1;i++)
  for(j=0;j<a-1-i;j++)
   if(c[j]>c[j+1]) {t=c[j];c[j]=c[j+1];c[j+1]=t;}
 for(i=0;i<b-1;i++)
  for(j=0;j<b-1-i;j++)
   if(d[j]>d[j+1]) {t=d[j];d[j]=d[j+1];d[j+1]=t;}
}

void combine()
{
 for(i=0;i<a;i++)
  e[i]=c[i];
 for(i=0;i<b;i++)
  e[a+i]=d[i];
}

void out()
{
 for(i=0;i<a+b-1;i++)
  my_printf("%d ",e[i]);
 my_printf("%d",e[a+b-1]);
}

int main_bench()
{
 in();
 order();
 combine();
 out();
}