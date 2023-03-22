#define NUM_ITER 6155

#include <header.h>


int main_bench()
{ 

  int i,j,k,n,a[1500],flag=0;
	my_scanf("%d%d",&n,&k);
	for (i=1;i<=n;i++) my_scanf("%d",&a[i]);
	for (i=2;i<=n;i++)
		for (j=1;j<=i-1;j++) if ((a[i]+a[j])==k) flag=1;
	if (n==1) my_printf("no"); else
		if (flag) my_printf("yes"); else my_printf("no");
	
}