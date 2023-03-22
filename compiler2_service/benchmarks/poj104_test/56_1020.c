#define NUM_ITER 1285358

#include <header.h>

int main_bench()
{
	int m,i;
	char a[6];
	my_scanf("%s",a);
    m=strlen(a);
	for(i=m;i>=0;i--)
	{
		if(a[i]=='\0') continue;
		else my_printf("%c",a[i]);
	}
	return 0;
}
