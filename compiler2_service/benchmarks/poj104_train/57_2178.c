#define NUM_ITER 27044

#include <header.h>


int main_bench()
{
	int n;
	int len;	

	my_scanf("%d",&n);
	getchar();

	for(;n>0;n--)
	{
		char str[100];

		gets(str);
		len=strlen(str);

		if(str[len-1]=='g') str[len-3]='\0';
		else str[len-2]='\0';

		puts(str);
	}
}