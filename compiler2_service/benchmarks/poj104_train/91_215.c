#define NUM_ITER 559044

#include <header.h>

int main_bench()
{
	char *s1,*s2;
	int n,i;
	s1=(char*)malloc(100*sizeof(char));
	s2=(char*)malloc(100*sizeof(char));
    gets(s1);
	n=strlen(s1);
	for(i=0;i<n-1;i++)
	{
		*(s2+i)=*(s1+i)+(*(s1+i+1));
	}
	*(s2+n-1)=*(s1+n-1)+(*s1);
	 for(i=0;i<n;i++)
	 my_printf("%c",*(s2+i));
	 return 0;
}