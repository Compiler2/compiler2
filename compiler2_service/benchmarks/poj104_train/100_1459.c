#define NUM_ITER 14762

#include <header.h>

int main_bench()
{
      char a[301]={0};
      int i;
      for(i=1;i<=300;i++)
      {
                         my_scanf("%c",&a[i]);
                         if(a[i]=='\n') break;
      }
      int j;  int k;
      int s[256]={0};
      for(j='A';j<='Z';j++)
      {
                           for(k=1;k<=i;k++)
                           {
                                            if(a[k]==j) s[j]=s[j]+1;
                           }
                           if(s[j]>=1) my_printf("%c=%d\n",j,s[j]) ;
      }
      for(j='a';j<='z';j++)
      {
                           for(k=1;k<=i;k++)
                           {
                                            if(a[k]==j) s[j]=s[j]+1;
                           }
                           if(s[j]>=1) my_printf("%c=%d\n",j,s[j]) ;
      }
      int w,u;
      w=0;
      for(u=0;u<=255;u++)
      {
                         w=w+s[u];
      }
      if(w==0)  my_printf("No"); 
                          
  



}