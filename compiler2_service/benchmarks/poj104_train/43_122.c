#define NUM_ITER 12270

#include <header.h>

int main_bench()
{
    int n,i,j,k=1,counter=0;
    int a[50000],s[50000]={0};
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {a[i]=i+1;}
    s[0]=2;
    for(i=2;i<n;i++)
    {
                    for(j=2;j<i+1;j++)
                    {
                                      if(j==i)
                                      {
                                              if(a[i]%2==1)
                                             s[k]=a[i];
                                             k++;
                                      }
                                       if(a[i]%j==0) break;
                    }
    } 
    for(i=0;i<k-1;i++)
    {
                    for(j=i;j<k;j++)
                    {
                                    if(s[i]+s[j]==n)
                                    my_printf("%d %d\n",s[i],s[j]);
                    }
    }
   
}