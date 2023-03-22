#define NUM_ITER 1962167

#include <header.h>

int main_bench()
{int m,a,b,c,d,e;
 my_scanf("%d",&m);
 if(m>9999)
 {a=m/10000;b=(m-a*10000)/1000;c=(m-a*10000-b*1000)/100;
  d=(m-a*10000-b*1000-c*100)/10;e=m-a*10000-b*1000-c*100-d*10;
  my_printf("%d",e*10000+d*1000+c*100+b*10+a);
  }
else if(m>999)
{a=m/1000;b=(m-a*1000)/100;c=(m-a*1000-b*100)/10;
  d=(m-a*1000-b*100-c*10);
  my_printf("%d",d*1000+c*100+b*10+a);
  }
else if(m>99)
{a=m/100;b=(m-a*100)/10;c=m-a*100-b*10;
   my_printf("%d",c*100+b*10+a);
  }
else if(m>9)
{a=m/10;b=m-a*10; 
 my_printf("%d",b*10+a);
  }
else 
my_printf("%d",m);
  }