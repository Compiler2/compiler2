#define NUM_ITER 25550

#include <header.h>

main_bench()
{
      int t,i,j,k[26],x;
      char c[10000];
      my_scanf("%d",&t);
      for(i=0;i<t;i++)
      {
        my_scanf("%s",c);
        memset(k,0,sizeof(k));
        x=strlen(c);
        for(j=0;j<x;j++){
                         k[c[j]-'a']++;
                         }
        for(j=0;j<x;j++)
        {
          if(k[c[j]-'a']==1)
          {my_printf("%c\n",c[j]);
          break;}
          if(j==x-1)
          my_printf("no\n");
          }
      }

}