#define NUM_ITER 962322

#include <header.h>

int f(char c)
{   if ((c>'Z')&&(c<='z'))
    c=c-'a'+'A';
    return c;
}
main_bench()
{ int j=1;
  char str[1050];
  my_scanf("%s",str);
  for (int i=0;i<=strlen(str)-1;i++)
  {str[i]=f(str[i]);
  }
  for(int i=0;i<=strlen(str)-1;i++)
  {if(str[i]==str[i+1])
   {j=j+1;
   }
   else 
   {my_printf("(%c,%d)",str[i],j);
    j=1;
   }
  }
}