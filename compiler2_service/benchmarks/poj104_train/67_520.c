#include <header.h>

int main_bench()
{
 int n,i;
 int a[10000][2];
 double b[10000];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
  my_scanf("%d %d",&a[i][0],&a[i][1]);
  b[0]=(double)a[0][1]/a[0][0];
 for(i=1;i<n;i++)
  {
  b[i]=(double)a[i][1]/a[i][0];
   if(b[i]-b[0]>0.05)
    my_printf("better\n");
   else if(b[i]-b[0]< -0.05)
    my_printf("worse\n");
   else               
    my_printf("same\n");
  }
  
  
  return 0;
}
