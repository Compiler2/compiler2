#define NUM_ITER 659080

#include <header.h>

int main_bench()
{
    int n,x,k=0;
    int flag[550]={0};
    int t,j=1,i=0,max;
    char s[550];
    char s1[550][6]={0};
    my_scanf("%d",&n);
    my_scanf("%s",s);
    t=strlen(s);
    x=t-n+1;
    do
    {
    *(*(s1+j)+k)=*(s+i);
    i++;
    k++;
    if(k==n)
    {
    i=j;
    j++;
    k=0;
    }
    }while(j<=x);
    for(i=1;i<=x-1;i++)
    {
                       for(j=i+1;j<=x;j++)
                       {
                       if(strcmp(*(s1+i),*(s1+j))==0)
                       flag[i]++;                                          
                       }
    }
      max=*(flag+1);
    for(i=2;i<=x;i++)
    {
                     if(*(flag+i)>max)
                     max=*(flag+i);
    
    }
    if(max==0)
    my_printf("NO");
    else
    {
    my_printf("%d\n",max+1);
    for(i=1;i<=x;i++)
    {
                     if(flag[i]==max)
                     my_printf("%s\n",*(s1+i));
    }
     }
    return 0;
}
                      
                      