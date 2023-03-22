#define NUM_ITER 1061823

#include <header.h>

int main_bench()
{
    char s[100],w[100];
	int j,sl,wl;
      my_scanf("%s %s",&s,&w);
	  sl=strlen(s);wl=strlen(w);
	   for(j=0;j<wl;j++)
			   if (w[j]==s[0])
			   { my_printf("%d",j);break;}
			   return 0;

}
