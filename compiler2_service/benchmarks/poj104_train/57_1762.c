#include <header.h>

int main_bench()
{
int i,j;
int n,l;
 char word[50];
 my_scanf("%d", &n);
 for(i=0; i<n; i++)
 {
  my_scanf("%s", word);
      l=strlen(word);
     if ((word[l-1]=='r')||(word[l-1]=='y'))
  l=l-2;
  else l=l-3;
     for(j=0; j<l; j++)
   my_printf("%c", word[j]);
  my_printf("\n");
 }
 return 0;
}

