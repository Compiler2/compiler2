#define NUM_ITER 4

#include <header.h>

main_bench()
{
      int t;
      my_scanf("%d",&t);
      char a[100000];
      int b[100000];
      for(int i=0;i<t;i++)
      {
              for(int x=0;x<100000;x++)
              {
                      a[x]=0;
                      b[x]=0;
              }
              my_scanf("%s",a);
              int len=strlen(a);
              int j;
              for(j=0;j<len;j++)
              {
                      for(int k=j+1;k<len;k++)
                      { 
                              if(a[j]==a[k])
                              {
                                       b[j]++;
                                       b[k]++;
                              }
                      }
                      if(b[j]==0)
                      {
                                         my_printf("%c\n",a[j]);
                                         break;  
                      }
              }
              if(j==len)
              my_printf("no\n");
      }
}    

