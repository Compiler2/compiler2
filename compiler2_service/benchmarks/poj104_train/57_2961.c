#include <header.h>

int main_bench()
{
  char str[100];
  int n,i,d,c,m;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
   {
     my_scanf("%s",str);
     m=strlen(str);
	   c=strlen(str)-2;
	   d=strlen(str)-3;
     if(str[c]=='e'||str[c]=='l' )
        str[c]='\0';
     else if(str[d]=='i') 
         str[d]='\0';
     my_printf("%s\n",str);
  }
   return 0;
}
