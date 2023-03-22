#define NUM_ITER 1320631

#include <header.h>

int main_bench()
{
	char a[100];
    int i,j,n,k=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<=(n-1);i++)
	{
		if(a[i]!=32)
			my_printf("%c",a[i]);
		if(a[i]==32&&a[i-1]!=32)
		        my_printf("%c",a[i]);
	}
}
