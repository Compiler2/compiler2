#define NUM_ITER 11283

#include <header.h>

struct book
{
       int num;
       char au[32];
       int sta[27];
}b[1020];
int main_bench()
{
    int i,j,k,m,n;
    char c;
    my_scanf("%d",&m);
    for(i=0;i<m;i++)
    {
                    my_scanf("%d %s",&b[i].num,b[i].au);
    }
    for(i=0;i<m;i++)
    {
                    
                    for(j=0;;j++)
                    {
                                 c=b[i].au[j];
                                 if(c=='\0')
                                 {
                                            break;
                                 }
                                 else
                                 {
                                     b[i].sta[c-64]++;
                                 }
                    }  
    }
    int sum[27]={0};
    for(i=0;i<m;i++)
    {
                      for(j=1;j<27;j++)
                      {
                                       sum[j]+=b[i].sta[j];
                      }
    }
    int max=0;
    for(i=1;i<27;i++)
    {
                     if(sum[i]>max)
                     {
                                   max=sum[i];
                                   k=i;
                     }
    }
    my_printf("%c\n",k+64);
    n=0;
    for(i=0;i<m;i++)
    {
                    if(b[i].sta[k]!=0)
                    {
                                      n++;
                    }
    }
    my_printf("%d\n",n);
    n=0;
    for(i=0;i<m;i++)
    {
                    if(b[i].sta[k]!=0)
                    {
                                      n++;
                                      if(n==1)
                                      {
                                              my_printf("%d",b[i].num);
                                      }
                                      else
                                      {
                                          my_printf("\n%d",b[i].num);
                                      }
                    }
    }
    return 0;
}