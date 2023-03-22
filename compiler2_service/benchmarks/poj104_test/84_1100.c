#include <header.h>

int main_bench ()
{
  int n,max1,max2,i,d,e,f;
  my_scanf("%d\n",&n);
  my_scanf("%d\n",&d);
  my_scanf("%d\n",&e);
  max2=e;
  max1=d;
  if (d>e) 
{  max2=d;
   max1=e;
}

    for(i=2;i<n;i++)
{ 
  my_scanf("%d\n",&f);
  if (f>max2) 
{  max1=max2;
   max2=f;
}
else if (f<=max1) ;
else 
max1=f;
}
my_printf("%d\n%d",max2,max1);
return 0;
}

   

  