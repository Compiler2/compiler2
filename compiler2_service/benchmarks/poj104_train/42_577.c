#include <header.h>

int main_bench()
{
 int a[200000],t=0,i,j,n,m,*p;
 my_scanf ("%d\n",&n);
 p=a;
 for (i=0;i<n;i++)
 { 
  my_scanf ("%d",p++);
 }
 my_scanf ("%d",&m);
 p=a;
 for (i=0,t=0;i<n;i++)
 {
  if (*(p+i)==m) continue;
  else {*(p+n+t)=*(p+i);t++;}
 }
 p=a;
 for (i=n;i<n+t-1;i++,p++)
 {
  my_printf ("%d ",*(p+n));
 }
 if (t!=0)
 my_printf ("%d",a[n+t-1]);
 }