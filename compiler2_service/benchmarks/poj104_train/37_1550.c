#define NUM_ITER 3250

#include <header.h>

main_bench()
{
      int sn[128];
      for(int i='a';i<='z';i++) sn[i] = i;
      char ns[27]="abcdefghijklmnopqrstuvwxyz"; 
      int n;
      my_scanf("%d",&n);
      for(int t=0;t<n;t++)
      {
              char s[100000];
              my_scanf("%s",s);
              int len = strlen(s);
              int i=0;
              int a[26]={0};
              int sort[26]={0};
              int cixu=0;
              for(int j=0;j<len;j++)
              {
                    for(i='a';i<='z';i++)
                    {
                            if(sn[s[j]]==i)  
                            {
                                  a[i-'a']++;
                                  if(a[i-'a']==1)
                                  {
                                          cixu++;
                                          sort[i-'a'] = cixu;
                                  }
                                  break;
                            }
                    }
              }
              int first=27;
              int temp=0;
              for(i='a';i<='z';i++)
              {
                     if(a[i-'a']==1) 
                     {
                            if(sort[i-'a']<first) 
                            {
                                 first = sort[i-'a'];
                                 temp = i-'a';
                            }
                     }
              }
              if(t!=n-1)
              if(first==27) my_printf("no\n");
              else          my_printf("%c\n",ns[temp]); 
              else
              if(first==27) my_printf("no");
              else          my_printf("%c",ns[temp]);
      }
      } 