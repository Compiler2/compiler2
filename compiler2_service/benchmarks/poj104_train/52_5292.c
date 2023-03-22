#define NUM_ITER 49509

#include <header.h>

int main_bench()
{
 int a[1000],*p,i,j,n,m,k;
 my_scanf("%d%d",&n,&m);
 for( i = 0 ;i < n;i ++ )
 my_scanf("%d",&a[i]);
  p=&a[0];
  k = n - m % n;
 while(m--)
 {
    my_printf("%d ",*(p +n-m-1)  );
 }
 for( j = 0;j < k-1;j++ )
  {
    my_printf("%d ",*(p+j));
  }    
  my_printf("%d",*(p+k-1));

}
