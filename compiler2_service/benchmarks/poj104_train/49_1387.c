#define NUM_ITER 1104118

#include <header.h>

int main_bench()
{
	int i,j,k,l;
	char a[501];
	gets(a);
	for(j=2;j<strlen(a);j=j+2)
	{
		for(i=0;i<strlen(a);i++)
		{
			int d=0;
			for(k=j/2;k>=0;k--)
			{
				if(a[i+k]==a[i+j-k-1])
				{
					continue;
				}
				else
				{
					d=1;
					break;
				}
			}
			if(d==0)
			{
				for(l=i;l<i+j;l++)
				{
					my_printf("%c",a[l]);
				}
				putchar('\n');
			}	
		}
	}
	return 0;
}