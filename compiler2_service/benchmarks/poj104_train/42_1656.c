#define NUM_ITER 49453

#include <header.h>

int main_bench() 
{
    int n,i,j,k,c,m;
    my_scanf("%d",&n);
    int a[100000]; 
    for(i=0;i<n;i++)
    { 
        my_scanf("%d",&a[i]);
    } 
    my_scanf("%d",&k); 
    c=0;
    m=n;
   
        for(i=0;i<m;i++)
        {
            if(a[i]==k)
            {
                for(j=i;j<m;j++) 
                a[j]=a[j+1];
                c+=1; 
                m-=1;
                i--;       
            }  
        }   
    
        for(i=0;i<n-c-1;i++) 
        { 
        my_printf("%d ",a[i]);
        }
        my_printf("%d",a[n-c-1]);
    
      
        my_scanf("%d",&n);       
    return 0;  
}