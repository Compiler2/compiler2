#include <header.h>

int main_bench()
{int n;
my_scanf("%d",&n);
int s;
if(n==0)
{my_printf("0");return 0;}
 
while(n!=0)
{
	s=n%10;
	n/=10;
	my_printf("%d",s);
}
  
  return 0;
}