#define NUM_ITER 1588224

#include <header.h>


int main_bench()
{
	char s[100];
	int i,k;
	gets(s);
	for (i=1,k=1;s[i]!='\0';i++,k++)
	{
		if (s[i]==' '&&s[i-1]==' ')
		{
			k--;
		}
		else s[k]=s[i];
	}
	s[k]='\0';
	my_printf("%s\n",s);
}