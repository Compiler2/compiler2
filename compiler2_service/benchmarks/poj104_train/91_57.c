#include <header.h>

int main_bench(){
  char s[101];
  char *p,*q,c;
  int n,i;
  gets(s);
  n=strlen(s);
  q=s;
  p=s;
  for(i=0;i<n-1;i++){
   c=*p+*(p+1);
   p++;
   my_printf("%c",c);
   }
  c=*p+*q;
  my_printf("%c",c);
  
  }