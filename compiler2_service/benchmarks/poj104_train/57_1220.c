#define NUM_ITER 33277

#include <header.h>

int main_bench(){
    int n,i,j,l;
    char s[300];
    my_scanf("%d",&n);
    for (i=0; i<n; i++)
      {
          my_scanf("%s",s);
          l=strlen(s);
          if (s[l-1]=='r') s[l-2]=0;
          if (s[l-1]=='g') s[l-3]=0;
          if (s[l-1]=='y') s[l-2]=0;
          puts(s);
          
      }
      return 0;
}
