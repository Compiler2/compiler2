#define NUM_ITER 36207

#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      getchar();
      int i,j;
      char x[100];
      for(j=0;j<n;j++)
      {
                      gets(x);
                      if(x[0]=='_'||(x[0]>='A'&&x[0]<='z'))
                      {
                                                           if(x[1]=='\0')
                                                           {
                                                                my_printf("1\n");
                                                                continue;
                                                           }
                      }                      
                      else
                      {
                          my_printf("0\n");
                          continue;         
                      }
                      for(i=1;x[i]!='\0';i++)
                      { 
                                             if(x[i]=='_'||(x[i]>='A'&&x[i]<='z')||(x[i]>='0'&&x[i]<='9'))
                                                      continue; 
                                             else
                                             {
                                                      my_printf("0\n");
                                                      break; 
                                             }
                      }
                      if(x[i]=='\0')
                          my_printf("1\n"); 
      }
}
                          
