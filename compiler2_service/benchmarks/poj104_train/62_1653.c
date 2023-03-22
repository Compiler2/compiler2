#define NUM_ITER 1314492

#include <header.h>


int main_bench()
{
	char a[200];
	int i,b;
	
	gets (a);
	b=strlen(a);
	

	for (i=0;i<b;i++)
	{
		if (a[i]!=' ')
			my_printf("%c",a[i]);
		else if(a[i]==' '&& a[i+1]==' ')
		{
			continue;
		}
		else
		{
			my_printf(" ");
		}
	}


	return 0;
}
