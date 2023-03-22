#include <header.h>

int main_bench()
{
    int i,n,j,p,q,count=0;
    my_scanf("%d",&n);
    for(i=3;i<=n-2;i=i+2)
    {
          for(p=0,j=2;j<i;j++)
          {
          if(i%j==0)
          break;
                          }
          if(j==i)
          p=1;
          for(q=0,j=2;j<i+2;j++)
          {
             if((i+2)%j==0)
             break;
                            }
             if(j==i+2)
             q=1;
             if(p==1&&q==1){
             my_printf("%d %d\n",i,i+2);
             count++;}
                       }
                       if(count==0)
                       my_printf("empty");
                      

                       return 0;
                       }
