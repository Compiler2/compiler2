#define NUM_ITER 1221365

#include <header.h>

int main_bench()
{
	char a[80];
	char b[80];
	gets(a);
	gets(b);
	int i;
	for(i=0;a[i]||b[i];i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]-='a'-'A';
		if(b[i]>='a'&&b[i]<='z')
			b[i]-='a'-'A';
		if(a[i]<b[i])
		{
			my_printf("<\n");
			break;
		}
		else if(a[i]>b[i])
		{
			my_printf(">\n");
			break;
		}
	}
	if(!a[i]&&!b[i])my_printf("=\n");
	return 0;
}
