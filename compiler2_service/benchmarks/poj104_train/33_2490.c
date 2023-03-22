#define NUM_ITER 24909

#include <header.h>


int main_bench()
{
	int n,i,j;
	int LEN;
	my_scanf("%d",&n);
	getchar();
	for ( i = 0 ; i < n ; i ++)
	{
		char s[1000];
		gets(s);
		LEN = strlen(s);
		for ( j = 0 ; j < LEN ; j ++)
		{
			switch ( s[j] )
			{
			case 'A':
				my_printf("T");
				break;
			case 'T':
				my_printf("A");
				break;
			case 'C':
				my_printf("G");
				break;
			case 'G':
				my_printf("C");
				break;
			}
		}
		if( i < n-1)
			my_printf("\n");
	}
	return 0;
}