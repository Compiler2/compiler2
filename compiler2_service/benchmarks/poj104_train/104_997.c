#define NUM_ITER 543813

#include <header.h>

main_bench()
{
int x,y,i,j,m,n;
static int a[16];
static int b[16];
a[0]=10000;
b[0]=20000;
my_scanf("%d %d",&x,&y);
a[1]=x;
b[1]=y;
for(i=2;x>1;i++)
  { a[i]=x/2;
   x=x/2;}
m=i-1;
for(j=2;y>1;j++)
  { b[j]=y/2;
    y=y/2;}
n=j-1;
do{
    if(a[m]==b[n])
     m--;
     n--;
   }while(a[m]==b[n]);
my_printf("%d",a[m+1]);
}

  
   
   