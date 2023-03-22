#define NUM_ITER 1530230

#include <header.h>

int main_bench()
{
	int i,b=0;
	char a[1000];
	gets(a);
	for(i=0;i<1000;i++)
	{

		if(a[i]=='\0')
		{my_printf ("\n");break;}

		if(a[i]!=' ')
		{
			b=0;
			my_printf ("%c",a[i]);
		}
		else
			b=b+1;
		
		if(b==1)
			my_printf (" ");
		else
			continue;
	}
	return 0;
}

