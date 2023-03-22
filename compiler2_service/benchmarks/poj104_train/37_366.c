#define NUM_ITER 4913

#include <header.h>

main_bench()
{
   int t,i,l,j;
   char string[100000];
   int count[26];
   my_scanf("%d",&t);
   for(int m=0;m<t;m++)
   {
      int count[26]={0};
      my_scanf("%s",string);
      l=strlen(string);
      for(j=0;j<l;j++)
      {
         for(i=0;i<26;i++)
         {
            if(string[j]==i+'a')
               count[i]++;
         }
      }
      for(j=0;j<l;j++)
      {
          if(count[string[j]-'a']==1)
          {
            my_printf("%c\n",string[j]);
            break;
          }  
      }
      if(j==l)
        my_printf("no\n");
   }
   getchar();
   getchar();
} 