#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int a,b;
    my_scanf("%d %d",&a,&b);
    double x=(double)b/a;
    for(int i=1;i<n;i++)
    {
      int c,d;
      
      my_scanf("%d %d",&c,&d);
      double y=(double)d/c;
      if((y-x)>0.05)
      my_printf("better\n");   
      if((x-y)>0.05)
      my_printf("worse\n");
      if(fabs(y-x)<=0.05)
      my_printf("same\n");
    }
    getchar();
    getchar();
}

