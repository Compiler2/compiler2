#include <header.h>

main_bench()
{
      int t;
      int i=1;
      my_scanf("%d",&t);
      while(i<=t){
                  char str[100000];
                  int a;
                  memset(str,0,sizeof(str));
                  my_scanf("%s",&str);
                  int j=0;
                  int k=0;
                  a=strlen(str);
                  while(j<a){
                             while(k<a){
                                        if(str[j]!=str[k]&&j!=k)
                                           k=k+1;
                                        else if(j==k)
                                           k=k+1;
                                        else
                                           break;        
                                        }
                             if(k==a)
                                break;
                             else{
                                  j=j+1;
                                  k=0;
                                  }
                             }
                  if(j==a)
                     my_printf("no\n");
                  else{
                       if(k==a)
                          my_printf("%c\n",str[j]);
                       }
                  i=i+1;
                  }
   
}