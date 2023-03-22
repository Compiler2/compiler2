#include <header.h>

main_bench()
{
      char s[900];
      int i,n,j;
      
      my_scanf("%d",&n);
      gets(s);
      for (i=0;i<n;i++)
      {
          gets(s);
          j=0;
          if ((s[j]=='_') || (s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z'))
          {
              
              for (j=1;j<strlen(s);j++)
                  if ((s[j]=='_')||(s[j]>='a' && s[j]<='z')||(s[j]>='A' && s[j]<='Z')||(s[j]>='0' && s[j]<='9'))
                      continue;
                  else
                      break;
              if (j==strlen(s))
                  my_printf("1\n");
              else
                  my_printf("0\n");
          }
          else
              my_printf("0\n");
          
      }
      }
