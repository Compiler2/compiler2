#define NUM_ITER 5256

#include <header.h>

int main_bench()
{
 int m,n;
 int fenzi,fenmu,e;
 double s=0;
 my_scanf("%d",&m);
 for(int i=1;i<=m;i++)
 {
  fenmu=1;
  fenzi=2;
  my_scanf("%d",&n);
  s=0;
  for(int j=1;j<=n;j++)
  {
   s+=(double)fenzi/fenmu;
   e=fenzi;
   fenzi=fenzi+fenmu;
   fenmu=e;
  }
  my_printf("%.3lf\n",s);
 }
 return 0;
}