#define NUM_ITER 5310

#include <header.h>

int main_bench()
{
 int res[10000]={0,1},i,n,a,j,b[10000]={0};
 my_scanf("%d",&n);
 for(i=1;i<=n;i++){
  my_scanf("%d",&a);
  for(j=2;j<=a;j++){
   res[j]=res[j-1]+res[j-2];
  }
  b[i]=res[a];
 }
 for(i=1;i<=n;i++){
  my_printf("%d\n",b[i]);
 }
 return 0;
}
