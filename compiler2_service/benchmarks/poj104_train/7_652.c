#define NUM_ITER 659120

#include <header.h>

int main_bench()
{  int same,i,j,k;
    char str[256],sub[256],repl[256];
   my_scanf("%s%s%s",str,sub,repl);
   for(i=0;i<strlen(str);i++)
   { same=1;
     for(j=0;j<strlen(sub);j++)
     {if(str[i+j]!=sub[j])
      same=0;
     }
     if(same==0)
     my_printf("%c",str[i]);
     if(same==1)
     { my_printf("%s",repl);
       for(k=i+strlen(sub);str[k]!=0;k++)
       {my_printf("%c",str[k]);}
       break;
     }
   }
return 0;
}
