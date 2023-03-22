#include <header.h>

int main_bench()
{
int n,i,j,k,K,s;
int a[10000]={0}; 
my_scanf("%d",&n);
k=0;
s=0;
for(i=2;i<=n;i++)
    { 
        for(j=2;j<=i;j++)
        {
        if(i%j==0)
        break;
        else;        
        }
        
        if(i==j)
          {
            a[k]=i; 
            k++;
          }  
     }
K=k;
for(k=0;k<K;k++)
{
    if((a[k+1]-a[k])==2)
   { my_printf("%d %d\n",a[k],a[k+1]); 
    s++;}  
}
if(s==0)
my_printf("empty");              

return 0;     
} 