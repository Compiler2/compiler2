#include <header.h>

int main_bench()
{
	char a[5], t[5];
	int n, i;
	my_scanf("%s", a);
	n=strlen(a);
    for(i=0;i<n;i++){
	   t[n-i-1]=a[i];
	}
	t[n]='\0';
	my_printf("%s\n", t);
	return 0;
}