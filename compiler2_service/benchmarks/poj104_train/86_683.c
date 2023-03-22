#include <header.h>

int main_bench()
{
    int n,i,j,m,a,p,q,k,sum=0,b=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         my_scanf("%d",&m);
         if(m==0)
         {my_printf("60\n",a);
         }
         else if(m>0)
         {
         for(j=1;j<=m;j++)
         {
                          my_scanf("%d",&a);
                          q=a+3*j;
                          if(q<63)
                          {sum=q;
                         k=a;
                          b=j;}
                          }
                          if(sum>=60&&sum<=62)
                         { my_printf("%d\n",k);
                                
                                            }
                         else if(sum<60&&q>62)
                         {
                         p=60-3*b;
                         my_printf("%d\n",p);
                         
                          
                       }
                        
                        
                          
                            
                        if(q<60)
                          {   
                              sum=60-3*m;
                               my_printf("%d\n",sum);
                          }
              
              }
              }
       my_scanf("%D",&a);
       
             }
         