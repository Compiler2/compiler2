#include <header.h>

int main_bench()
{
  char s[100],w[100];
  int i,k=0;
  my_scanf("%s%s",s,w);
  for(i=0;w[i];i++)
    if(w[i]==s[k])
    {
      k++;
      if(k==strlen(s)-1)
        break;
    }
    else
      k=0;
  my_printf("%d\n",i-strlen(s)+2);
}
