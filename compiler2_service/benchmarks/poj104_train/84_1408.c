#include <header.h>

int main_bench()
{
 int a[100];
 int n,i,s,j;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  my_scanf("%d",&a[i]);
 }
 int max=-10000;
 for(s=0;s<n;s++)
 {
	 if(max<a[s]) max=a[s];
 }
 int secondMax=0;
 for(j=0;j<n;j++)
 {
	 if(secondMax<a[j]&&a[j]<max)
		 secondMax=a[j];
 }
 my_printf("%d\n",max);
 my_printf("%d",secondMax);
 return 0;
}