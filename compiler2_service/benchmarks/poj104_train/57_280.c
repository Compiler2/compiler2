#define NUM_ITER 33149

#include <header.h>

main_bench()
{
      int n,i,l;
      char str[1000]; 
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      {
               my_scanf("%s",str);
               l=strlen(str);
               if((str[l-1]=='y'&&str[l-2]=='l')||(str[l-1]=='r'||str[l-2]=='e'))
               str[l-2]='\0';
               else if((str[l-1]=='g'&&str[l-2]=='n'&&str[l-3]=='i'))
               str[l-3]='\0';
               my_printf("%s\n",str);
      }
      getchar();
      getchar();
} 