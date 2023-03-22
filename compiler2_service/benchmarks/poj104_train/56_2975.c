#include <header.h>



nixu(int n)
{
int m;
m=n%10;
	my_printf("%d",m); 
	m=n/10;
if (m<1) ;
else m=nixu(m);
	return m;	
}

int main_bench()
{
int n;

my_scanf("%d",&n);

nixu(n);

}