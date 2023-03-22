#define NUM_ITER 3211

#include <header.h>


int main_bench()
{
	int I,n,a[100],i,j,p;
	my_scanf("%d",&n);

	for(I=0;I<n;I++)
	my_scanf("%d",&a[I]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(a[i]>a[j]){
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
	}
	my_printf("%d\n%d\n",a[0],a[1]);
}