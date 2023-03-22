#define NUM_ITER 35328

#include <header.h>


int main_bench()
{
  int i,a[129]={0},b[129]={0};
  char c;
  my_scanf("%c",&c);
  while(c!=' ')
  { 
    a[(unsigned short)c]++;
    my_scanf("%c",&c);
  }
  my_scanf("%c",&c);
  while(c!='\n')
  { 
    b[(unsigned short)c]++;
    my_scanf("%c",&c);
  }
  for(i=1;i<=128;i++)
  {
     if(a[i]!=b[i]) break;
  }
  if(i>128) my_printf("YES");
  else my_printf("NO");
  return 0;
}