#define NUM_ITER 1346389

#include <header.h>


int main_bench()
{
	char c[1000];
	int l;
	int i;
	gets(c);  
	l=strlen(c);
	if(c[0]!=' ')
		my_printf("%c",c[0]);   
	for(i=1;i<l;i++)
	{
		if(c[i]!=' ')       
			my_printf("%c",c[i]);  
		else
		{
			if(c[i-1]!=' ')
				my_printf(" ");
		}
	}
	return 0;
}