#define NUM_ITER 983109

#include <header.h>

int main_bench()
{
 char a[300][50],s[1000];
  gets(s);
  int i,l[300]={0},g=0;
  for(i=0;i<strlen(s);i++)
  {
	  if(s[i]==' '&&s[i-1]!=' ')
   g++;
  }
  g=g+1;
  int j=1;
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]!=' ')
    {l[j]++;}
    else  
	if(s[i+1]!=' ')
	{j++;}
   }
  for(i=1;i<g;i++)
  {
   my_printf("%d,",l[i]);
  }
  my_printf("%d",l[g]);


   return 0;
}
