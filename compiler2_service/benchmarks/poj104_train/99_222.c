#define NUM_ITER 52143

#include <header.h>

int main_bench()
{
  int n,c[4]={0},i;
  double a[4];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
      {
         int bi;
         my_scanf("%d",&bi);
         if(bi<=18)
           {
             c[0]++;
            }
         else if(bi>18&&bi<=35)
           {
             c[1]++;
            }
         else if(bi>35&&bi<=60)
           {
             c[2]++;
            }
         else if(bi>60)
           {
             c[3]++;
            }
      }
     for(i=0;i<4;i++)
        {
          a[i]=(double)c[i]/n*100;
        }
     my_printf("1-18: %.2lf",a[0]);
    my_printf("%%\n");
     my_printf("19-35: %.2lf",a[1]);
    my_printf("%%\n");
     my_printf("36-60: %.2lf",a[2]);
    my_printf("%%\n");
     my_printf("60??: %.2lf",a[3]);
    my_printf("%%");
  return 0;
}