#include <header.h>

int main_bench()
{
	int n,a=0,b;
	my_scanf("%d",&n);
	if(n==1){my_printf("End");}
	if(n>1){
	for(a=0;a=1;a=0){
		if(n%2!=0){b=n;n=n*3+1;
		my_printf("%d*3+1=%d\n",b,n);}      
		if(n%2==0){b=n;n=n/2;
		my_printf("%d/2=%d\n",b,n);}
		if(n==1){break;}}
	my_printf("End");}
return 0;
}
