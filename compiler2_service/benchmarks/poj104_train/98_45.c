#include <header.h>

int main_bench()
{
	int n,i;
	char a[300][40];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a[i]);
	}
	int sum=0;
	for(i=0;i<n-1;i++){
		if((80-sum)>=(strlen(a[i]))&&(80-sum)<(strlen(a[i])+strlen(a[i+1])+1)){
			my_printf("%s\n",a[i]);
			sum=0;
		}
		else if((80-sum)>=(strlen(a[i])+strlen(a[i+1])+1)){
			my_printf("%s ",a[i]);
			sum=sum+strlen(a[i])+1;
		}
	}
	my_printf("%s\n",a[n-1]);
}