#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int* p;
    
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=n-1;i++)
    {
        my_scanf("%d",&p[i]);    
            
            }
    
    int del;
    my_scanf("%d",&del);
    int c=0;
    for(int i=0;i<=n-1;i++)
    {
            if(p[i]!=del) {c++;
                         if(c==1)   my_printf("%d",p[i]);
                         else my_printf(" %d",p[i]);
                         }
            
            
     }
    
    
    
    
    
    
    
    
    
    
    
}
