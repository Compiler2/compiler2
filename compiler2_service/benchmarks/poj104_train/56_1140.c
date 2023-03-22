#include <header.h>


int main_bench()
{
    int n,a[5],i;
	my_scanf("%d",&n);
	a[0]=n/10000;
	a[1]=(n%10000)/1000;
	a[2]=(n%1000)/100;
	a[3]=(n%100)/10;
	a[4]=(n%10);
	for(i=4;i>=0;i--){
		if(a[i]==0)
			continue;
			my_printf("%d",a[i]);
		
	}
	return 0;
}