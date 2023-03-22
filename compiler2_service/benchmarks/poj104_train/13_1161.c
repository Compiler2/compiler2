#include <header.h>

int main_bench()
{
 int N;
 my_scanf("%d",&N);   
 int a[N],b[N];
 int i,j,k,n,m = 0,flag;
 for(i = 0; i <= N; i++)
  my_scanf("%d",&a[i]);
 for(i = 0; i < N; i++)
 {
  flag = 1;
  for(j = 1; j <= m; j++)
   if(a[i] == b[j])
   {
    flag = 0;
    break;
   }
   if(flag)
   {
    b[j] = a[i];
    m++;
   }
 }
 my_printf("%d",b[1]);
 for(i = 2; i <= m; i++)
  my_printf(" %d",b[i]);
}
