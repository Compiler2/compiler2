#include <header.h>

int main_bench()
{
    int m,n,j,i;
    double x=2,y=1,a;
    double sum=0;
    my_scanf("%d",&m);
    for(i=0;i<m;i++){
      my_scanf("%d",&n);
      for(j=0;j<n;j++){
      sum=sum+x/y;
      a=x;
      x=a+y;
      y=a;
      }
      my_printf("%.3lf\n",sum);
      sum=0;
      x=2;
      y=1;
    }
    my_scanf("%d",&n);
    return 0;
}
