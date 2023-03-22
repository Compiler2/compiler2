#include <header.h>

int main_bench()
{
  char a[350];
  int b[26];
  int i,j;
  my_scanf("%s",&a);
  for(i=0;i<26;i++)
    b[i]=0;
  for(i=0;a[i];i++)
    if(a[i]>='a' && a[i]<='z')
      b[a[i]-'a']++;
  for(i=0;i<26;i++)
    if(b[i]>0)
    {
      my_printf("%c=%d\n",i+'a',b[i]);
      j=1;
    }
  if(!j)
    my_printf("No\n");
  return 0;
}

