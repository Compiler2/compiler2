#define NUM_ITER 28160

#include <header.h>

main_bench()
{
      int N,i;
      my_scanf("%d",&N);
      for(i=1;i<=N;i++)
      {
           char ch[100000];
           my_scanf("%s",ch);
           int j,k,ji=0;
           int m=strlen(ch);
           for(k=0;k<=m-1;k++)
           {
               for(j=0;j<=m-1;j++)
               {
                    if(k==j) continue;
                    if(ch[k]==ch[j]) break;
               }
               if(j==m) {my_printf("%c\n",ch[k]);break;}
           }
           if(k==m)my_printf("no\n");
      }
}