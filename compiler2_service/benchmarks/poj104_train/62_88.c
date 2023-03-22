#define NUM_ITER 1486303

#include <header.h>

main_bench()
{
  char s[10000];
  int i,j,k;
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]==' '&&s[i-1]==' ')
    {
      for(j=i;;j++)
      {
        s[j]=s[j+1];
        if(s[j]=='\0')
        break;
      }
      if(s[i]==' ')
      i--;
    }
  }
  my_printf("%s",s);
}

