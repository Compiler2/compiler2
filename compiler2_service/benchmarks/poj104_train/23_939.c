#define NUM_ITER 1253410

#include <header.h>

int main_bench()
{
	char str1[100];
	int n,i,m;
	gets(str1);
	n=strlen(str1);
	for(i=n-1;i>=0;i--)
	{
		if(str1[i]==' ')
		{
			for(m=i+1;m<n;m++)
				my_printf("%c",str1[m]);
				n=i;
				my_printf(" ");
		}
	}
	for (m=0;m<n;m++)
	my_printf("%c",str1[m]);

	return 0;
}
