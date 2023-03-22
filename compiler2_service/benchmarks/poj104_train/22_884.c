#define NUM_ITER 15623

#include <header.h>

int main_bench()
{
	int i,a[300],n=-2,p=-2;
	for(i=0;i<=299;i++)
		a[i]=-100;
	my_scanf("%d",&a[0]);
	for(i=1;i<=299;i++)
	my_scanf(",%d",&a[i]);
	for(i=0;i<=299;i++){
		if(a[i]>n){
			p=n;
			n=a[i];}
		if(a[i]>p&&a[i]<n)
			p=a[i];
	}
	if(p==-2)
		my_printf("No\n");
	else
		my_printf("%d\n",p);
	return 0;
}