#include <header.h>

main_bench()
{
 int n,i;
 float a,b,c;
 float x,y,z;
 my_scanf("%d",&n);
 my_scanf("%f%f",&x,&y);
 z=y/x;
 for(i=0;i<n-1;i++)
 {
  my_scanf("%f%f",&a,&b);
  c=b/a;
  if(20*(c-z)>1)
  my_printf("better\n");
  else
  {if(20*(z-c)>1)
  my_printf("worse\n");
  else
  my_printf("same\n");}
 }
 }
