#include <header.h>

int main_bench()
{
	int i,j,n,Strlen;
	char word[100][50];
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
		my_scanf("%s",&word[i]);
      for(i=0;i<n;i++)
	  {Strlen=strlen(word[i]);
	  if(word[i][Strlen-1]=='g')
	  for(j=0;j<Strlen-3;j++)
		  my_printf("%c",word[i][j]);
	  else
       for(j=0;j<Strlen-2;j++)
		  my_printf("%c",word[i][j]);
	   my_printf("\n");}
	  return 0;
}
