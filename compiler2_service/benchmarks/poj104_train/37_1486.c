#define NUM_ITER 9631

#include <header.h>

main_bench()
{
      int c['z']={0},flag=0;
      int n; 
      int i,count,j; 
      char str[100001];
      my_scanf("%d",&n);
      
      for (count=0;count<n;count++)
      { 
      
      for (j='a';j<='z';j++)c[j]=0; 
      my_scanf("%s",str);
      i=0;
      while(str[i]!='\0')
      {
                 c[str[i]]++;
                 i++; 
      } 
      i=0; 
      flag=0;
      while(str[i]!='\0')
      {
                 if (c[str[i]]==1){my_printf("%c\n",str[i]);flag=1;break;} 
                 i++; 
      } 
      if(flag!=1)my_printf("no\n"); 
      } 
} 
