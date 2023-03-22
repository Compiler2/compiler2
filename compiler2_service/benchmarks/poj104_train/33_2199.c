#define NUM_ITER 23016

#include <header.h>

int main_bench()
{
  int n;
  my_scanf("%d",&n);
  while(n--){
  char s[256];
  int i;
  my_scanf("%s",s);
  int len=strlen(s);
  for(i=0;i<len;i++){
  if(s[i]=='A')
     s[i]='T';
  else if(s[i]=='T')
	  s[i]='A';
  else if(s[i]=='C')
      s[i]='G';
  else if(s[i]=='G')
	  s[i]='C';
  }
  my_printf("%s\n",s);

  }
  return 0;
}
