#include <header.h>

int main_bench()
{
    int n,a[100],i,max1=0,max2=0,x=0;
	my_scanf("%d",&n); 
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);	
	for(i=0;i<n;i++)
	 if(max1<a[i]) {max1=a[i]; x=i;}
	 my_printf("%d\n",max1);
	 for(i=0;i<n;i++)
     if(max2<a[i]&&a[i]!=max1) max2=a[i];
	 my_printf("%d",max2);

}
