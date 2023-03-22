#define NUM_ITER 30986

#include <header.h>

 int main_bench()
 {
     int n,l,i;
     char sz[99][99];
     my_scanf("%d",&n);
     for(i=0;i<n;i++)
     my_scanf("%s",sz[i]);
     for(i=0;i<n;i++){
         l=strlen(sz[i]);
         if(sz[i][l-1]=='r'||sz[i][l-1]=='y')
         sz[i][l-2]='\0';
         else if(sz[i][l-1]=='g')
         sz[i][l-3]='\0';
     }
      for(i=0;i<n-1;i++)
      my_printf("%s\n",sz[i]);
      my_printf("%s",sz[n-1]);
      return 0;
     
 }
