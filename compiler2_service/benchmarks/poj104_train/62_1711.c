#include <header.h>

int main_bench()
{
   char str[250];
   int i,j,n;
   gets(str);
   for(i=0;i<strlen(str);i++)
   {
	 if(str[i]!=' ')  printf("%c",str[i]);
	 if(str[i]==' '&&str[i+1]!=' ')  printf(" ");
   }
	   
	return 0;
}