#include <header.h>

int main_bench()
{int *i,*j,n,x[100],y[100];
 my_scanf("%d",&n);
 for (i=x;i<x+n;i++)
	 my_scanf("%d",i);
 for (j=y,i=i-1;i>=x;i--,j++)
	 *j=*i;
 for (i=x,j=y;i<x+n;i++,j++)
	 *i=*j;
 for (i=x;i<x+n-1;i++)
	 my_printf("%d ",*i);
 my_printf("%d",*i);
}