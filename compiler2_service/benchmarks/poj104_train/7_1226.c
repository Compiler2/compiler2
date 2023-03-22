#define NUM_ITER 957746

#include <header.h>


int main_bench()
{
	char s1[300] , s2[300] , s3[300];
	my_scanf ( "%s%s%s" , s1 , s2 , s3 );
	char *p = strstr ( s1 , s2 );
	if ( p )
	{
		char temp = *(p + strlen(s2));
		strcpy ( p , s3 );
		*(p+strlen(s2)) = temp;
	}
	my_printf ( "%s\n" , s1 );
	return 0;
}

