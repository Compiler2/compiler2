#define NUM_ITER 1323305

#include <header.h>

int main_bench()
{
	char a[101],b[101];
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		*(b+i)=*(a+i)+*(a+i+1);
	}
	*(b+n-1)=*(a+n-1)+*(a);
	*(b+n)='\0';
	my_printf("%s",b);
	return 0;
}