#define NUM_ITER 35019

#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      char a[100000];
      int m;
      for (m=1;m<=n;m++)
      {
          my_scanf("%s",a);
          int count1,count2;
          int i,j;
          count2=0;
          for (i=0;a[i]!='\0';i++)
          {
              if (a[i]!='1')
              {
                            count1=1;
                            for (j=i+1;a[j]!='\0';j++)
                            {
                                if (a[j]==a[i])
                                {
                                               count1++;
                                               a[j]='1';
                                }
                            }
                            if (count1==1)
                            {
                                          my_printf("%c\n",a[i]);
                                          count2++;
                                          break;
                            }
              }
          }
          if (count2==0)
          {
               my_printf("no");
          }
      }
getchar();getchar();getchar();getchar();getchar();
} 
              
                                     
          
          