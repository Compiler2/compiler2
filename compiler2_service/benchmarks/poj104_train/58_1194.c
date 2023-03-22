#include <header.h>

main_bench()
{
      int n,i,j,k;
      char a[90];
      my_scanf("%d",&n);
      char s[2];
      gets(s);
      for(i=0;i<n;i++)
      {
                      gets(a);
                       j=strlen(a);
                       for(k=0;k<j;k++)
                       {
                                       if(k==0)
                                       {
                                              if(a[k]=='_' || (a[k]>='a'&& a[k]<='z') || (a[k]>='A' && a[k]<='Z'))
                                              continue;
                                              else 
                                              {
                                                   my_printf("0\n");
                                                   break;
                                              }
                                       }
                                       else{
                                            if(a[k]=='_' || (a[k]>='a'&&a[0]<='z') || (a[k]>='A' && a[k]<='Z') || (a[k]>='0'&&a[k]<='9'))
                                            continue;
                                            else
                                            {
                                                my_printf("0\n");
                                                break;
                                            }
                                            }
                                       
                       }
                       if(k==j)
                       my_printf("1\n");
      }
      getchar();
      getchar();
}