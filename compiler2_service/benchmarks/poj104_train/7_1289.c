#define NUM_ITER 826491

#include <header.h>

main_bench()
{
      char a[260];
      char b[260];
      char c[260];
      my_scanf ("%s",a);
      my_scanf ("%s",b);
      my_scanf ("%s",c);
      int len1=strlen(a);
      int len2=strlen(b);
      int len3=strlen(c);
      int i,j,length;
      for (i=0;i<len1;i++)
      {
          length=0;
          for (j=0;j<len2;j++)
          {
              if (a[i+j]==b[j]) length=length+1;
          }
          if (length==len2)
          {
              for (j=0;j<i;j++)
              {
                  my_printf ("%c",a[j]);
              }
              for (j=0;j<len3;j++)
              {
                  my_printf ("%c",c[j]);
              }
              for (j=i+len3;j<len1;j++)
              {
                  my_printf ("%c",a[j]);
              }
              my_printf ("\n");
              break;
          }
      }
      if (length!=len2) my_printf ("%s\n",a);
}