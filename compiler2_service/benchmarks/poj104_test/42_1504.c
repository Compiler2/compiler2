#include <header.h>



int main_bench()
{
    int n,i,j,del,s;
    s=0; 
    my_scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    my_scanf("%d",&del);
    for(i=0;i<n;i++)
    {
        if(a[i]==del)
        {
            for(j=i;j>s;j--)
            {
                a[j]=a[j-1];                
            }
            s++;
        }
    } 
    for(i=s;i<n;i++)
    {
        my_printf("%d",a[i]);
        if(i<n-1) my_printf(" ");
    }
    return 0;
    } 
 