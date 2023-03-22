#include <header.h>

int main_bench()
{
	int n,i,j,k,a[20000],b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);
	for(j=1;j<n;j++){
		for(k=0;k<=j;k++){
	if(a[k]!=a[j])b++;
		}
		if(b==j)my_printf(" %d",a[j]);
		b=0;
	}
	return 0;

}