#include <header.h>

main_bench()
{
      char word[1000][50]={'\0'};
      int i,n,sum,len;
      my_scanf("%d",&n);
      
      for(i=0;i<n;i++)
          my_scanf("%s",word[i]);
      my_printf("%s",word[0]);
      sum=strlen(word[0]);
      for(i=1;i<n;i++)
      {
          len=strlen(word[i]);
          sum+=len+1;
          if(sum<=80)
          {
              my_printf(" %s",word[i]);
              
          }
          else
          {
              my_printf("\n");
              my_printf("%s",word[i]);
              sum=strlen(word[i]);
          }
      }

}
