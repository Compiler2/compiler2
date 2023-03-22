#include <header.h>

int main_bench()
{
 int n,i,j;
 double a[10000][2],b[10000];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
  my_scanf("%lf %lf",&a[i][0],&a[i][1]);
 for(i=0;i<n;i++)
  b[i]=a[i][1]/a[i][0];
 for(i=1;i<n;i++)
  {
   if((b[i]-b[0])>0.05)
    my_printf("better\n");
   else if((b[i]-b[0])<-0.05)
    my_printf("worse\n");
   else               
    my_printf("same\n");
  }
  getchar();  
  getchar(); 
  return 0;
}
