#define NUM_ITER 637803

#include <header.h>

int main_bench()
{  int same,i,j,k;
    char str[100],sub[100],repl[100];
   gets(str);
   gets(sub);
   gets(repl);
   for(i=0;i<strlen(str);i++)
   { same=1;
     for(j=0;j<strlen(sub);j++)
     {if(str[i+j]!=sub[j])
      same=0;
     }
     if((same==1&&str[i-1]==' ')||(same==1&&i==0))
     { my_printf("%s",repl);
       i+=strlen(sub)-1;
     }
     else
     my_printf("%c",str[i]);

   }
   return 0;
}
