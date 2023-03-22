#define NUM_ITER 1466809

#include <header.h>

int main_bench()
{  char string[100];
	int i;
	char c;
	gets(string);
   for(i=0;c=string[i]!='\0';i++)
   if(c=string[i]!=' ')
   my_printf("%c",string[i]);
   else
   if(c=string[i-1]!=' ')
   my_printf("%c",string[i]);
   else continue;
   my_printf("%c",'\n');
	return 0;
}