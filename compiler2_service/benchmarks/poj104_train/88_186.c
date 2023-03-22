#include <header.h>

main_bench()
{
  int i,n;
  char *p;
  p=(char*)malloc(30*sizeof(char));
  gets(p);
  n=strlen(p);
  for(i=0;i<n;i++)
  {
   if(*(p+i)>='0'&&*(p+i)<='9')
    my_printf("%c",*(p+i));
   if((*(p+i)<'0'||*(p+i)>'9')&&(*(p+i-1)>='0'&&*(p+i-1)<='9'))
    my_printf("\n");
  }
  free(p);
}