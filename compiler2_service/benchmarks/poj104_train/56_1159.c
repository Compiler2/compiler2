#include <header.h>

int main_bench()
{   
	int i ,j;
   char num[5];
   for(i=0;i<5;i++)
   
   my_scanf("%c",&num[i]);
   for(j=4;j>=0;j--)
  	if (num[j]!=0)
	my_printf("%c",num[j]);
   return 0;
  
}