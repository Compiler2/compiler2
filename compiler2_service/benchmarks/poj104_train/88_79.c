#define NUM_ITER 1340067

#include <header.h>

main_bench()
{
      char s[30],num[30];
      gets(s);
      int l;
      l=strlen(s);
      int k=0;
      for (int i=0;i<l;i++)
      {
          if (s[i]>='0'&&s[i]<='9')
          {
              num[k]=s[i];
              k++;
          }
          else
          {
              if (k!=0)
              {
                       for (int j=0;j<k;j++)
                          my_printf("%c",num[j]);
                       my_printf("\n");
                       k=0;
              }
              else k=0;
          }
      }
      if (k!=0)
      {
         for (int j=0;j<k;j++)
            my_printf("%c",num[j]);
         my_printf("\n");
      }
      getchar();
      getchar();
}