#define NUM_ITER 1407252

#include <header.h>

int main_bench()
{

	char s[105],a[105];
	int i,j,k,l,m,n;
	gets(s);

	for(i=0;*(s+i)!='\0';i++)
	{if(*(s+i+1)=='\0')
	*(a+i)=*(s+i)+*(s+0);
	else *(a+i)=*(s+i)+*(s+i+1);
	}

	*(a+i)='\0';
	for(i=0;*(a+i)!='\0';i++)
		my_printf("%c",*(a+i));
}