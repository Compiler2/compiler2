#define NUM_ITER 875410

#include <header.h>

void f(char a[],int i,int n)
{
  for(i=0;i<n;i++)
  {
    if(a[i]<='Z')
      a[i]=a[i]+'a'-'A';
  }
}
int main_bench()
{
  char a[100],b[100];
  int c,d,i;
  gets(a);
  gets(b);
  c=strlen(a);
  d=strlen(b);
  f(a,i,c);
  f(b,i,d);
  if(strcmp(a,b)==0) my_printf("=");
  else if(strcmp(a,b)>0) my_printf(">");
  else my_printf("<");
  return 0;
}
