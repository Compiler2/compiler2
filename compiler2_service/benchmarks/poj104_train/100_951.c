#define NUM_ITER 548913

#include <header.h>

int main_bench()
{
char str[300];
int sz[26];
int i,len,noprint=1;
     for(i=0;i<26;i++)
            {
          sz[i]=0;
             }
my_scanf("%s",str);
len=strlen(str);
      for(i=0;i<len;i++)
         {
     if(str[i]>=97&&str[i]<=122)
            {
            sz[str[i]-97]++;
             }
          }
     for(i=0;i<26;i++)
     {
     if(sz[i]>0)
           {
            noprint=0;
            my_printf("%c=%d\n",i+97,sz[i]);
            }
      }
    if(noprint){my_printf("No");}
return 0;
}
       
