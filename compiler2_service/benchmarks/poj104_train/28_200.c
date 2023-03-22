#define NUM_ITER 1531089

#include <header.h>

int main_bench()
{
	char s[9000];
	int i=0,t=0,j=0;
	gets(s);
	while(s[i]!='\0')
	{
	     if(s[i]!=' ')
			 j++;
		 else
		 {
			 if(j!=0)
			    my_printf("%d,",j);
			 j=0;
		 }
		 i++;
	}
	
	my_printf("%d",j);
}
