#define NUM_ITER 1293494

#include <header.h>


int main_bench()
{
	int i,len;
	char a[101];
	char b[101]={'\0'};
	char *pa,*pb;

	gets(a);
	len=strlen(a);
	for(pa=a,pb=b;pa<a+len-1;pa++,pb++)
	{
		*pb=*pa+*(pa+1);
	}
	*pb=*pa+*a;
	my_printf("%s\n",b);	
	return 0;
}
