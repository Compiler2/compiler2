#define NUM_ITER 406831

#include <header.h>


int main_bench()
{
	int m=0,n=10000,l;
	char *max,*min,*s,b;
	max=(char *)malloc(100*sizeof(char));
	min=(char *)malloc(100*sizeof(char));
	s=(char *)malloc(100*sizeof(char));
	for (;;)
	{
		my_scanf("%s",s);
		l=strlen(s);
		if (l<n) 
		{
			strcpy(min,s);
			n=l;
		}
		if (l>m) 
		{
			strcpy(max,s);
			m=l;
		}
		b=getchar();
		if (b!=' ') break;
	}
	my_printf("%s\n%s\n",max,min);
}