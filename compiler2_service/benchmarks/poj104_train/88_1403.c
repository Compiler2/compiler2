#define NUM_ITER 1170784

#include <header.h>

int main_bench()
{
	char s[300];
	int a[300],i=0,j;
	gets(s);
	for(i=0;i<strlen(s);i++)
		a[i]=(int)s[i];
	for(i=0;i<strlen(s);i++)
	{
		if(a[i]>47&&a[i]<58)
		{
			for(j=0;j<strlen(s)-i;j++)
			{
				if(a[i+j]>47&&a[i+j]<58)
				{
					my_printf("%c",s[i+j]);
					continue;
				}
				else
				{
					my_printf("\n");
					break;
				}
			}
			i=i+j;
		}
	}
}

	