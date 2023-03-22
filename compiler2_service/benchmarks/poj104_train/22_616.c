#define NUM_ITER 1611788

#include <header.h>

int main_bench()
{
 int a[400];
 int i=0,j=0,n=0,t,x,y;
 char c=',';
 while(c==',')
 {
  my_scanf("%d%c",&a[i],&c);
  i++;
 }
 n=i;
 i=2;
 if(a[0]>a[1])
  x=a[0],y=a[1];
 else
  if(a[0]==a[1])
   x=a[1],y=0;
  else
   x=a[1],y=a[0];
 while(i<n)
 {
  if(a[i]>x)
   y=x,x=a[i];
  else
   if(a[i]>y&&a[i]!=x)
    y=a[i];
  i++;
 }
 if(x==y||n==1||y==0)
  my_printf("No");
 else
  my_printf("%d",y);
}