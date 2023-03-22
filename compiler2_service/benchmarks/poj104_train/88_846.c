#include <header.h>

int main_bench()
{ char*str,*p;int k=1;
  str=(char *)malloc(40*sizeof(char));
  gets(str);
  p=str;
  for (;*p!='\0';p++)
  { if (*p>='0'&&*p<='9')
    {my_printf("%c",*p);k=1;}
    else if(k=1) {my_printf("\n");k=0;}
  }
}