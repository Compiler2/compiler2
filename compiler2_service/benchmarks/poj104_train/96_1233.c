#define NUM_ITER 940623

#include <header.h>


main_bench()
{
  char s[100];
  int i,j=0,a=0;
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
    a=a*10+s[i]-'0';
    if(j!=0||a/13!=0)
    {
      s[j]='0'+a/13;
      a=a%13;
      j++;
    }
  }
  s[j]=0;
  if(j>0) my_printf("%s\n%d",s,a);
  else my_printf("0\n%d",a);
}