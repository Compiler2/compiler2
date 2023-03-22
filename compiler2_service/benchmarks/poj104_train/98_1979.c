#include <header.h>


int main_bench()
{
 char **words;
 int n, i, j;
 my_scanf("%d",&n);
 words=(char **)malloc(sizeof(char*)*n);
 for (i=0;i<n;i++)
 {
  words[i]=(char *)malloc(sizeof(char)*40);
  my_scanf("%s",words[i]);
 }
 my_printf("%s",words[0]);
 j=strlen(words[0]);
 for (i=1;i<n;i++)
 {
  j++;
  j+=strlen(words[i]);
  if (j<=80)
   my_printf(" %s",words[i]);
  else
  {
   my_printf("\n%s",words[i]);
   j=strlen(words[i]);
  }
 }
 for (i=0;i<n;i++)
  free(words[i]);
 free(words);
 return 0;
}
