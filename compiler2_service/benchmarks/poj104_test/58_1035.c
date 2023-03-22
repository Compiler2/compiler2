#include <header.h>

int main_bench()
{
      int n;
      my_scanf("%d\n",&n);
      int i,judge,l,j;
      char s[100];
      for (i=0;i<n;i++)
      {
          gets(s);
          judge=1;
          if (s[0]<'A'||s[0]>'Z')
            if (s[0]<'a'||s[0]>'z')
              if (s[0]!='_')
                judge=0;
          l=strlen(s);
          for (j=0;j<l;j++)
          {
              if (s[j]<'A'||s[j]>'Z')
                 if (s[j]<'a'||s[j]>'z')
                    if (s[j]<'0'||s[j]>'9')
                       if (s[j]!='_')
                       {   
                           judge=0;
                       }
          }
          my_printf("%d\n",judge);
      }
} 
