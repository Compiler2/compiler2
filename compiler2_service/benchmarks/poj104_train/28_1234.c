#include <header.h>

int main_bench()
{
	char words[300][30];
	char temp;
   int i=0,l;
   my_scanf("%s",words[i]);
   l=strlen(words[i]);
   my_printf("%d",l);
   i++;
   my_scanf("%c",&temp);
   while (temp!='\n')
   {
	   my_scanf("%s",words[i]);
	   l=strlen(words[i]);
	   my_printf(",%d",l);
	   i++;
            my_scanf("%c",&temp);

   }
   return 0;
}
