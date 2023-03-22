#define NUM_ITER 1091195

#include <header.h>

main_bench()
{
	char a[101],b[101];
	gets(a);
	for (int i=0;i<strlen(a);i++)
	{b[i]=a[i]+a[i+1];
	b[strlen(a)-1]=a[0]+a[strlen(a)-1];
	my_printf ("%c",b[i]);}
} 