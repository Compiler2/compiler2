#define NUM_ITER 1312417

#include <header.h>

int main_bench()
{
    char a[100],b[100];
	int i,l;
	gets(a);
	l=strlen(a);
	if(l==1)my_printf("%c\n",(int)a[0]);
	else
	{
	for(i=0;i<l-1;i++)b[i]=(int)a[i]+(int)a[i+1];
	b[l-1]=(int)a[0]+(int)a[l-1];
	for(i=0;i<l;i++)my_printf("%c",b[i]);
	}
	return 0;
}

