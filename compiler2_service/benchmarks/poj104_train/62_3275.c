#define NUM_ITER 1291811

#include <header.h>

int main_bench()
{
	char a[101];
	int b[101];
	int lenth,i;
	char c=' ';
	gets(a);
	lenth=strlen(a);
	for(i=0;i<lenth;i++)
	{
		b[i]=1;
	}
	for(i=0;i<lenth;i++)
	{
		if(a[i]==c&&a[i-1]==c)
			b[i]=0;
	}
	for(i=0;i<lenth;i++)
	{
		if(b[i]==1)
			my_printf("%c",a[i]);
	}
	return 0;
}
