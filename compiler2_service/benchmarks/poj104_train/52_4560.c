#define NUM_ITER 8117

#include <header.h>

int a[100]={0},n,m;
int main_bench()
{
    int i;
    void move(int n,int m,int a[50]);
    my_scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    move(n,m,a);
    for(i=0;i<n-1;i++)
    my_printf("%d ",a[i]);
    my_printf("%d\n",a[n-1]);
}
void move(int n,int m,int a[100])
{
     int *p,d;
     for(;m>0;m--)
     {
      d=*(a+n-1);
      for(p=a+n-1;p>a;p--)
      *p=*(p-1);
      *a=d;
      }
}
