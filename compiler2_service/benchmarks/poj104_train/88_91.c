#define NUM_ITER 1350794

#include <header.h>

main_bench()
{
      char s[2000];
      gets(s);
      int i;
      for(i=0;s[i]!='\0';i++)
      {if(s[i]>=48&&s[i]<=57&&s[i+1]>=48&&s[i+1]<=57)
      my_printf("%c",s[i]);
      if(s[i]>=48&&s[i]<=57&&(s[i+1]<48||s[i+1]>57))
      my_printf("%c\n",s[i]);}
      getchar();
      getchar();
      return 0;
      }
