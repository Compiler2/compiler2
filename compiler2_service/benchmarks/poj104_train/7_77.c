#define NUM_ITER 946517

#include <header.h>

int main_bench()
{
	char s[257],a[257],b[257];
	my_scanf("%s %s %s",s,a,b);
	int i = 0,j = 0;
	int find = 0;
	for(i = 0;s[i] != '\0';i ++)
	{
		if(s[i] == a[0])
		{

			for(j = 0;a[j] != '\0';j ++)
			{
				
				if(a[j] != s[i + j])
				{
					find = 0;
					break;
				}
			}
			if(a[j] == '\0')
				find = 1;
		}
		if(find ==1)
			break;
	}
	if(find)
	{for(j = 0;b[j] != '\0';j ++)
		s[i + j] = b[j];
	}
	my_printf("%s",s);
	return 0;
}