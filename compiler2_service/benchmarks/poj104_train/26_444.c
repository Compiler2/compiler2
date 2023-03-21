#include <header.h>

int main_bench()
{
	int i=0;
	char c;
    while((c=getchar())!='\n')
	{
     if(c==' ')
	 {
		 if(i==0)
		 {
			 putchar(c);
		     i++;
		 }
	 }
	 else 
	 {
		 putchar(c);
	     i=0;
	 }
	}
	return 0;
}
