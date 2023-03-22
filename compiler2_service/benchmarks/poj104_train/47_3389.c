#include <header.h>

  int main_bench()
{
  int n,i,q;
  my_scanf("%d", &n);
  int a[100];
  for(i=1;i<=n;i++){
	 my_scanf("%d", &a[i]);
  }
  for(q=n;q>1;q--){
  my_printf("%d", a[q]);
  my_printf(" ");
  }
  my_printf("%d", a[1]);
			return 0;
}