#include <header.h>


int main_bench()
{
int a;
my_scanf("%d",&a);
if(a==0) my_printf("0");
while(a>0){
my_printf("%d",a%10);
a/=10;
}
	return 0;
}
