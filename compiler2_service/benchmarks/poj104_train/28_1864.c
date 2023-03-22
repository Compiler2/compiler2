#define NUM_ITER 1169114

#include <header.h>

int main_bench()
{
    char a[10000];
	int i,j,l;
	gets(a);
	for(i=0;i<strlen(a);)
	{
		if(a[i]!=' ')
		{
			l=0;
			for(j=0;j<strlen(a);j++)
			{
				if(a[i+j]!=' ')
				{
					l++;
				}
				if((a[i+j]==' ')&&((i+j)!=(strlen(a)-1)))
				{
				    my_printf("%d,",l);
					break;
				}
				if((i+j)==(strlen(a)-1))
				{
					my_printf("%d",l);
					break;
				}
			}
			i=i+l;
		}
		else
			i++;
	}
	return 0;
}
