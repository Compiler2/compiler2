#define NUM_ITER 1300592

#include <header.h>

int main_bench()
{
	int len,i;
	char a[100],b[100];
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(i!=len-1)
		{
			b[i]=a[i]+a[i+1];
		}
		else
		{
			b[i]=a[i]+a[0];
		}
	}
	for(i=0;i<len;i++)
	{
		my_printf("%c",b[i]);
	}


	
	return 0;
}