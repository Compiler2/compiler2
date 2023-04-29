#define NUM_ITER 110546

#include <header.h>


int main_bench()
{
	int i,a,n,t;
	int f[25]={1,1};
	int b[20];
	my_scanf("%d",&n);
	for(i=2;i<25;i++)
    f[i]=f[i-2]+f[i-1];
	for(i=0;i<n;i++){
	my_scanf("%d",&a);
	b[i]=a-1;}
    for(i=0;i<n;i++)
	{
		t=b[i];
		my_printf("%d\n",f[t]);}
}
