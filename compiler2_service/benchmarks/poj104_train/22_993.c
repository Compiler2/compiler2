#include <header.h>

int main_bench()
{
	int a[300],i=1,j,b,c=0,n;
	my_scanf("%d",&a[0]);
	while(my_scanf(",%d",&a[i]))i=i+1;
	b=a[0];
	for(j=0;j<i;j++){
	if(a[j]>b)b=a[j];
	}
	for(n=0;n<i;n++){
	if(a[n]>c&&a[n]!=b)
		c=a[n];
	}
	if(c==0)my_printf("No\n");
	else
	my_printf("%d\n",c);
	return 0;
}
