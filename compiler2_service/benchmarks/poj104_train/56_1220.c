#include <header.h>

void echo()
{
	char c1;
	scanf("%c",&c1);
	if(c1!='\n')
	echo();
	printf("%c",c1);
}
   int main_bench()
   {echo();}