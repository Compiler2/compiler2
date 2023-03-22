#include <header.h>

int main_bench()
{
  int n,i,m=0;
  char word[1000][20];
  my_scanf("%d",&n);
  for(i=0;i<=n-1;i++)
  {
	  my_scanf("%s",word[i]);
  }
  for(i=0;i<=n-1;i++)
  {
	  if(m<=80-strlen(word[i]))
	  {
		  my_printf("%s",word[i]);
		  if(m<=79-strlen(word[i])-strlen(word[i+1])&&i<n-1)
		  my_printf(" ");
          m+=strlen(word[i])+1;
	  }
      else
	  {
		  i=i-1;
		  my_printf("\n");
		  m=0;
	  }
	  
  }
  return 0;
}