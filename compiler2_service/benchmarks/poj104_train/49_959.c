#define NUM_ITER 1348584

#include <header.h>

main_bench()
{
      char s[500];
      int i,j,k,l,t,m;
      my_scanf("%s",s);
      l=strlen(s);
      for(i=2;i<=l;i++)
      {
         for(j=0;j<=l-i;j++)
         { 
            t=1;
            for(k=j;k<j+i;k++)
            {
                if(s[k]!=s[j+j+i-1-k])
                {
                   t=0;
                   break;
                }
                if(t==0) break;
            }
            if(t==1)
            {
               for(m=j;m<j+i;m++)
               my_printf("%c",s[m]);
               my_printf("\n");
            }
         }
      }
}