#define NUM_ITER 255293

#include <header.h>

main_bench()
{
  int i,n,x,y,t=0;
  int a[10000],b[10000];
  my_scanf("%d",&n);
  while(my_scanf("%d %d",&x,&y)==2)
  {
    if(x==0&&y==0)
      break;
    else
      a[x]++;
      b[y]++;
      }
  for(i=0;i<n;i++)
  {
    if (a[i]==0&&b[i]==n-1)
      my_printf("%d",i);
      t++;
      }
  if(t==0)
    my_printf("NOT FOUND");
  getchar();
  getchar();
  getchar();
  return 0;
}