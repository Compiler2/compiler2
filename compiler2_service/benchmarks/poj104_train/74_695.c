#define NUM_ITER 22117

#include <header.h>



int main_bench()
{
    int a[100000]={0};
    int i,j,m,n,t=0;
    
    my_scanf("%d %d",&m,&n);
    
    for(i=m;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
           if(i%j==0)
           {
              a[i]=1;
              break;
           }
        }
    }
    
    for(i=m;i<=n;i++)
    {
        if(a[i]==0)
        {
        int s[10]={0};
        int k=0,tmp=0,f=0;
        tmp=i;
        while(tmp>0)
        {
           s[k]=tmp%10;
           k++;
           tmp=tmp/10;
        }
        
        for(j=0;j<k/2+1;j++)
        {
           if(s[j]!=s[k-1-j])
           {
             f=1;
             break;
           }
        }
        if(f==0&&t!=0)
        {
             my_printf(",%d",i);
             t=1;
        }
        if(f==0&&t==0)
        {
           my_printf("%d",i);
           t=1;
        }
        }
        
    }
    if(t==0)
    my_printf("no");
           
    return 0;
}