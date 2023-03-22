#include <header.h>

 int main_bench()
{
  int n,*p,i=0,x;
  my_scanf("%d",&n);
  int a[n];
  p=a;
  for (i=0;i<n;i++)
  my_scanf("%d",p++);
  my_scanf("%d",&x);
   p=a;
   for (p;p<a+n;p++)
   { if (*p!=x) 
   {my_printf("%d",*p);    break;}}
    p=p+1;
   for (p;p<a+n;p++)  
  { if (*p!=x) 
   my_printf(" %d",*p);}
   }