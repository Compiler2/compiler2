#include <header.h>

main_bench()
{
 int n,a[20000],j,temp;
 my_scanf("%d",&n);
 for(int i=1;i<=n;i++)
            {
             my_scanf("%d",&temp);
             if(i==1)
                       {
                        j=0;
                        my_printf("%d",temp);
                        a[j]=temp;
                       }
             else
                 {
                  int c=0;
                  for(int k=0;k<=j;k++)
                          {
                           if(a[k]==temp)
                           c++;            
                          }
                  if(c==0)
                           {        
                            my_printf(" %d",temp);
                            j++;
                            a[j]=temp;     
                           }             
                 }         
            }
 getchar();
 getchar();
}