#define NUM_ITER 4819

#include <header.h>

int f(int x)
{
    int a[1000]={1,1};
    for(int i=2;i<x;i++)
    a[i]=a[i-1]+a[i-2];
    return a[x-1];
}
int main_bench()
{
  int n;
  my_scanf("%d",&n);
  int b[1000];
  for(int i=0;i<n;i++)
  my_scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
  my_printf("%d\n",f(b[i]));
  getchar();
  getchar();
} 