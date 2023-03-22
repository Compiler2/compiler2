#define NUM_ITER 4

#include <header.h>

main_bench()
{
      char a[100001]={0};
      int n,la,count;
      int b[26];
      my_scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
              count=0;
              for(int j=0;j<26;j++)
              b[j]=0;
              for (int j=0;j<100001;j++)
              a[j]=0;
              my_scanf("%s",a);
              for(int j=0;;j++)
              {
                      if(a[j]==0) 
                      {
                                 la=j;
                                 break;
                      }
                      b[a[j]-'a']++;
              }
              for(int j=0;j<la;j++)
              {
                      if(b[a[j]-'a']==1)
                      {
                                        my_printf("%c\n",a[j]);
                                        count=1;
                                        break;
                      }
              }
              if(count==0)
              my_printf("no\n");
      }
}