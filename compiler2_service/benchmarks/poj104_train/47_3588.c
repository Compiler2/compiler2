#define NUM_ITER 41589

#include <header.h>


int main_bench(){
     int i,n,a[100],b[100];
	 my_scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 my_scanf("%d",&a[i]);
	 } 
	 for(i=0;i<n;i++)
	 b[i]=a[i];
	 for(i=0;i<n;i++)
	 a[i]=b[n-1-i];
	 for(i=0;i<n-1;i++)
	 my_printf("%d ",a[i]);
	 my_printf("%d",a[n-1]);
return 0;
}
