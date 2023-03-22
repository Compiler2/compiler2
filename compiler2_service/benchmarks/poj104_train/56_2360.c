#include <header.h>

int main_bench() 
{ 
	int n,t=0;
	my_scanf("%d",&n);
	while(n!=0)
	{
		t=t*10+n%10;
		n=(n-n%10)/10;	
	}
	my_printf("%d",t);
}
