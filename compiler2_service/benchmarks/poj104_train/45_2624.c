#define NUM_ITER 1094619

#include <header.h>

int main_bench()
{
  int k,g,r,n,i,j,x=0;
  char s[50],w[50];
  my_scanf("%s %s",s,w);
  k=strlen(s);
  g=strlen(w);
  for(i=0;i<g;i++) 
   { 
    if(w[i]==s[x])
     {
            r=i;
break;

     }
       }
   my_printf("%d",r);
  return 0;
}
              