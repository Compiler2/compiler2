#include <header.h>

int main_bench()
{
   char str[30];
   gets(str);
   char *str_pointer;
   str_pointer=str;
   int i,flag,count;
   flag=count=0;
   for(i=0;str[i];i++)
   {
	   if(str[i]>='0'&&str[i]<='9')
	   {
		 my_printf("%c",str[i]);
		 flag=0;
	   }
	   else if(flag==0)
	   {
		   my_printf("\n");
		   flag=1;
	   }
   }
   return 0;
}
	   
