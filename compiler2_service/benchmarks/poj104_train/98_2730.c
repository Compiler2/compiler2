#define NUM_ITER 18964

#include <header.h>

int main_bench()
{
    int n,i,j,d=0,t=0;
    char s[40],s0[40],s1[10000]={'\0'};
    my_scanf("%d ",&n);
    my_scanf("%s ",s);
    d=strlen(s);
    strcat(s1,s);
    for(i=0;i<n-1;i++)
    {
      my_scanf("%s ",s);
      for(j=0;s[j]!='\0';j++){
       s0[t]=s[j];
       t++;
      }
      d=d+strlen(s)+1;
      if(d<=80)
      {
          s0[t]='\0';
          strcat(s1," ");
          strcat(s1,s0);
      }
      if(d>80)
       {
           s0[t]='\0';
           strcat(s1,"\n");
           strcat(s1,s0);
           d=strlen(s0);
        }
       t=0;
       
    }
    puts(s1);
    return 0;
}
      

