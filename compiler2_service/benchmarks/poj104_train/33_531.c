#define NUM_ITER 32494

#include <header.h>

int main_bench()
{
  int i,j,n;
  char s[1111],d;
  my_scanf("%d",&n);
  for(j=0;j<n;j++)
  {
    my_scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]=='A')
      {
        d='T';
      }
      if(s[i]=='T')
      {
        d='A';
      }
      if(s[i]=='C')
      {
        d='G';
      }
      if(s[i]=='G')
      {
        d='C';
      }
      s[i]=d;
    }
    my_printf("%s\n",s);
  }
  return 0;
}

