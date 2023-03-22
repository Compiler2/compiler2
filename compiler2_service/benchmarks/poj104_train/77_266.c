#include <header.h>

int main_bench()
{
	char a[100];
	int b[100], i, j=0, x;
	my_scanf("%s", a);
    x=a[0];
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==x) {b[j]=i; j++;}
		else {my_printf("%d %d\n", b[j-1], i); j--;}
	}
	return 0;
}