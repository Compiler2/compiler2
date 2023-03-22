#define NUM_ITER 1343332

#include <header.h>

int main_bench()
{ int a,n,i,k,leap=1;
  char s[200];
  gets(s);
  a=strlen(s);
  for(i=0;i<a;i++)
  { 
	  if(s[i]!=' ')
	  {leap=1;
		  my_printf("%c",s[i]);
	  }
	  if(s[i]==' '&&leap==1)
	  { my_printf(" ");
	   leap=0;
	  }
  }

}