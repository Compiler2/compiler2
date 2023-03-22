#include <header.h>

int main_bench()
{int a,x,i=2,y,m1,m2=0;
 my_scanf("%d",&a);
 my_scanf("%d",&x);
 m1=x;
 while (i<=a)
 {my_scanf("%d",&y);
  if (m1<y)
	  {m2=m1;
       m1=y;}
  else if(m1>=y&&y>m2)
  { m2=y;}
    i++;}
 my_printf("%d\n%d\n",m1,m2);
return 0;
}
