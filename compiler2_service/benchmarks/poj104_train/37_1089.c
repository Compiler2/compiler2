#define NUM_ITER 1628

#include <header.h>

char rec[200];
int main_bench()
{
    char s[10000];
    int i,j,l,t,k,n;
    my_scanf("%d\n",&n);
    for(j=0;j<n;j++)
    {
     my_scanf("%s",s);
     for(i=0;i<200;i++)
      rec[i]=0;
     l=strlen(s);
     for(i=0;i<l;i++)
      rec[s[i]]++;
     t=0;
     for(i=0;i<l;i++)
      if(rec[s[i]]==1)
      {
        my_printf("%c\n",s[i]);
        t=1;
        break;
      }
     if(t==0) my_printf("no\n");
    }
    my_scanf("%d",&i);
    return 0;
}
      
