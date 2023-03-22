#define NUM_ITER 102995

#include <header.h>

char dp[10000];
int num[10000],n;
int main_bench()
{
    int i,j,len,flag=1,max=0,k;
    my_scanf("%d",&n);
    my_scanf("%s",dp);
    len=strlen(dp);
    for(i=0;i+n-1<len;i++)
    for(j=i;j+n-1<len;j++)
    {
                          flag=1;
                          for(k=0;k<n;k++)
                          {
                                          if(dp[i+k]!=dp[j+k])
                                          {
                                          flag=0;
                                          break;
                                          }
                          }
                          if(flag==1)
                          {
                          num[i]++;
                          }
                          if(num[i]>max)
                          max=num[i];
    }
    if(max==1){
    my_printf("NO");
    return 0;
    }
    my_printf("%d",max);
    for(i=0;i<len;i++)
    if(num[i]==max)
    {my_printf("\n");
    for(j=0;j<n;j++)
    my_printf("%c",dp[i+j]);
    }
    
    return 0;
}
    
    
    
