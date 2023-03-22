#include <header.h>

int main_bench()
{
 int n,m,i;
 int a[100];
 my_scanf("%d %d",&n,&m);
  for (i=1;i<=n;i++)
	
  { my_scanf("%d",&a[i]);}
	int *x;
	x=&a[n];
	for(i=1;i<=n;i++){
	x++;
	*x=a[i];
	}
  my_printf("%d",a[n-m+1]);
  for(i=n-m+2;i<=2*n-m;i++){
  my_printf(" %d",a[i]);
  }
	  
	 
	return 0;
}

