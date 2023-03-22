#include <header.h>

main_bench()
{
      int t,i,j,k,m;
      char s[100005];
      my_scanf("%d",&t);
      for(k=1;k<=t;k++)
      {
          my_scanf("%s",s); for(i=0;s[i]!='\0';i++) m=i;
          for(i=0;i<=m;i++)
          {
              for(j=0;j<=m;j++)
              {
                   if(j==i) continue;
                   if(s[j]==s[i]) break;
              }
              if(j==m+1)
              {
                my_printf("%c\n",s[i]);
                break;
              }
          }
          if(i==m+1)
          my_printf("no\n");
      }
}