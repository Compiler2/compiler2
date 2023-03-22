#define NUM_ITER 50855

#include <header.h>




int main_bench()
{
int n,m;
my_scanf("%d%d",&n,&m);
int a[100];
int i;
for(i=0;i<n;i++){
my_scanf("%d",&a[i]);
}
int pos=n-m;
for(i=0;i<n-1;i++){
my_printf("%d ",a[(pos+i)%n]);}
my_printf("%d\n",a[(pos+i)%n]);
	return 0;
}

