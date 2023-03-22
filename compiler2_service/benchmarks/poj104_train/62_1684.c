#define NUM_ITER 1324845

#include <header.h>

int main_bench()
{
	int n,kongge=0;
	char a[200];
	gets(a);
	n=strlen(a);
	for (int i=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
			my_printf("%c",a[i]);
			kongge=0;
		}
		else if(kongge==0)
		{
			my_printf(" ");
			kongge+=1;
		}
	}


	return 0;
}

