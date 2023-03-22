#define NUM_ITER 1380557

#include <header.h>

int main_bench()
{
	int i,c;
	char a[103],b[103];
	gets(a);
	for (i=0;i<103;i++)
	{
		if (a[i+1]=='\0')
		{
			c=i;
			break;
		}
		b[i]=a[i]+a[i+1];
	}
	b[c]=a[c]+a[0];
	for(i=0;i<103;i++)
	{
		if (i==c+1)
		{
			my_printf("\n");
			break;
		}
		else
			my_printf ("%c",b[i]);
	}
	return 0;
}