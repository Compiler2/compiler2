#define NUM_ITER 975517

#include <header.h>

main_bench()
{  char *s,*c;
   int i,j;
   s=(char *)calloc(31,sizeof(char));
   gets(s);
   for(i=0;*(s+i)!='\0';i++)
   {
    if(*(s+i)<='9'&&*(s+i)>='0')my_printf("%c",*(s+i));
     else
      { for(;(*(s+i)<'0'||*(s+i)>'9')&&*(s+i)!='\0';i++);

      if(*(s+i)!='\0')my_printf("\n");
      i--;
      }
   }

}