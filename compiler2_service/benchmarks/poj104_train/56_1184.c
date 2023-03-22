#include <header.h>

int main_bench()
{
	char num[6], i, a, b=0, k=0;
	my_scanf("%s", num);
	a=strlen(num);
	for(i=0;i<a/2;i++){
		    b = num[i];
		    num[i] = num[a-1-i];
		    num[a-1-i] = b;
		}
	my_printf("%s", num);
	return 0;
}