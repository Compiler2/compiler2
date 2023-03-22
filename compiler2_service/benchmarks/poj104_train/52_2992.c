#define NUM_ITER 48940

#include <header.h>

int main_bench()
{
 int a[200],n,m,i,j;
 my_scanf("%d%d",&n,&m);
 for(i=0;i<n;i++){
  my_scanf("%d",&a[i]);
  }
  for(i=0;i<n-m;i++){
 a[n+m+i]=a[i];
 }
for(i=n-m,j=0;i<n;i++,j++){
 
  a[n+j]=a[i];

}
  for(i=n;i<(2*n-1);i++){
  my_printf("%d ",a[i]);
  }
 my_printf("%d",a[2*n-1]);
 return 0;
}

