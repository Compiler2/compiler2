#include <header.h>

int main_bench()
{
int i,n;
int num [100];
my_scanf("%d",&n);
i=0;
while(i<n){
	my_scanf("%d",&num [i]);
	i++;
}
i=n-1;
while(i>0){
	my_printf("%d ",num [i]);
	i--;
}
my_printf("%d",num [0]);
return 0;
}
