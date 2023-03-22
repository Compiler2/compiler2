#define NUM_ITER 25796

#include <header.h>

int main_bench()
{
  int m,i,j,k;
  my_scanf("%d",&m);
  for(i=3;i<=m/2;i++)
{
  for(j=2;j<i;j++)
  if(i%j==0) break;

  if(j<i) continue;
    for(k=2;k<m-i;k++)

        if((m-i)%k==0) break;

  if(k<(m-i)) continue;
  my_printf("%d %d\n",i,m-i);
}
  return 0;
}