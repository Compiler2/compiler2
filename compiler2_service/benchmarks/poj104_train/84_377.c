#define NUM_ITER 44268

#include <header.h>

int main_bench()
{   int a[100],i,m1,m2,n;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d\n",&a[i]);
}
   m1=a[0];
   m2=0;
   for(i=0;i<n;i++){
	   if(m1<a[i])m1=a[i];
   }

   for(i=0;i<n;i++)
	   if(a[i]<m1&&m2<a[i])m2=a[i];
	my_printf("%d\n%d",m1,m2);


	return 0;
}