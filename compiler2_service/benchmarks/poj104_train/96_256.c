#define NUM_ITER 960804

#include <header.h>

main_bench()
{
      char s[1000];
      int b[1000];
      int l,n,i,j;
      gets(s);
      l=strlen(s);
      n=0;
      for (i=0;i<=l-1;i++)
      {
          n=n*10+s[i]-48;
          b[i]=n/13;
          n=n%13;
      }
      j=0;
      while ((b[j]==0)&&(j<=l-1)) j++;
      if (j==l) j--;
      for (i=j;i<=l-1;i++)
      my_printf("%d",b[i]);
      my_printf("\n");
      my_printf("%d",n);
}