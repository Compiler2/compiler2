#define NUM_ITER 1342791

#include <header.h>


char f[1];
int main_bench()
{
      char s[1000];
      my_scanf("%s",s);
      int p=0;
      int k,n,t=0;
      n=strlen(s);
      s[n]='a';
      if(s[0]>='a'&&s[0]<='z')
      f[0]=s[0]+'A'-'a';
      else
      f[0]=s[0];
      for(k=1;k<=n;k++)
      {
                       if(s[k-1]>='a'&&s[k-1]<='z')
                       s[k-1]=s[k-1]+'A'-'a';
                       if(s[k-1]!=s[p])
                       {
                                       my_printf("(%s,%d)",f,t);
                                       f[0]=s[k-1];
                                       p=k-1;
                                       t=1;
                       }
                       else t++;
                       if(k==n)
                       my_printf("(%s,%d)",f,t);
                       
      }
     }
