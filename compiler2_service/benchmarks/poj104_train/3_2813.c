#include <header.h>

int main_bench()
{
    int n,a;
    my_scanf("%d %d\n",&n,&a);
    int sz[n];
    for(int i=0;i<n-1;i++){my_scanf("%d ",&sz[i]);}
    my_scanf("&d",&sz[n-1]);
    for(int i=0;i<n-1;i++)
    {
      for(int k=i+1;k<n;k++)
      { if(sz[i]+sz[k]==a)
         {my_printf("yes");return 0;}
        if(i==n-2&&k==n-1&&sz[i]+sz[k]!=a){my_printf("no");return 0;} 
      }
    }
    
 return 0;  
}
 
