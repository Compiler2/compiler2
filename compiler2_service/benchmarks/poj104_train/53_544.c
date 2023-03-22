#define NUM_ITER 10230

#include <header.h>

int main_bench()
{
	int n,i,j,t=0,a[400];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
     for(i=2;i<=n;i++)
	 {
		 for(j=1;j<i;j++)
		if(a[i]==a[j])a[i]=-999999;
                  
		 

	 }
	 for(i=1;i<=n;i++)
	if(a[i]!=-999999)t=i;
	  for(i=1;i<t;i++)  
		if(a[i]!=-999999)my_printf("%d,",a[i]);
		my_printf("%d",a[t]);

}
