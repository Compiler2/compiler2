#define NUM_ITER 1321307

#include <header.h>

main_bench()
{
      char a[1000];
      int l; 
      my_scanf("%s",a);
      l=strlen(a);
      int t=1; 
      for(int i=0;i<l;i++)
      {
              if(a[i]==a[i+1]||(a[i]+'a'-'A')==(a[i+1])||(a[i]+'A'-'a')==(a[i+1]))
              t++;
              else
              {
                  if(a[i]>='A'&&a[i]<='Z') 
                  my_printf("(%c,%d)",a[i],t); 
                  else
                  my_printf("(%c,%d)",a[i]-'a'+'A',t); 
                  t=1; 
              } 
      } 
      getchar();getchar(); 
      
}