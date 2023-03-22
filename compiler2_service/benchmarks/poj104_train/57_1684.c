#define NUM_ITER 28892

#include <header.h>

int main_bench()
{
	int m;
	my_scanf("%d", &m);
	int i,len;
	for(i=0;i<m;i++)
	{
		char s1[100];
    	my_scanf("%s", s1);
	    len=strlen(s1);
	    if((int)s1[len-1]==114)
		{
			s1[len-2]='\0';
		    my_printf("%s\n", s1);
		}
	    else if((int)s1[len-1]==121)
		{
	    	s1[len-2]='\0';
	    	my_printf("%s\n", s1);
		}
       else
	   {
		    s1[len-3]='\0';
	    	my_printf("%s\n", s1);
	   }
	}
	return 0;
}
