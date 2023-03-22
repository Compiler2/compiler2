#define NUM_ITER 8139

#include <header.h>

int main_bench()
{
    int n,num,e[20001],i,j;
    my_scanf("%d/n",&n);
    if(n==1)
    {
           my_scanf("%d",&num);
           my_printf("%d",num);
    }else{ 
           for(i=1;i<=n;++i)
           {
                     my_scanf("%d",&num);
                     e[i]=num;
                     if(i==1)
                     {
                             my_printf("%d",e[1]);
                     }else{
                            for(j=1;j<i;j++)
                            {
                                      if(e[i]==e[j])
                                      {
                                         e[i]=0;
                                               break;
                                                    }
                                                    }
                                                    if(e[i]!=0)
                                                    {
                                                               my_printf(" %d",e[i]);
                                                               }
                                                               }
                                                               }
                                                               }
                                                               return 0;
                                                               }