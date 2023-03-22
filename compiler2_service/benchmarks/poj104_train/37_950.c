#include <header.h>

main_bench()
{
      int t,i;
      
      my_scanf("%d",&t);
      for(i=0;i<t;i++)
      {
          int j,c=0;
          int lt[26]={0};
          char a[100000]={'\0'};
          my_scanf("%s",a);
          for(j=0;a[j]!='\0';j++)
             lt[a[j]-'a']++;
          for(j=0;a[j]!='\0';j++)
          {
              if(lt[a[j]-'a']==1)
              {
                  my_printf("%c\n",a[j]);
                  c++;
                  break;
              }
          }
          if(c==0)
              my_printf("no\n");
      }
}
              
