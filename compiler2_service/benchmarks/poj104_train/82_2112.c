#include <header.h>


int main_bench()
{
    int i,n,c,k;
   
    c=k=0;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        my_scanf("%d%d",&(a[i]),&(b[i]));
        if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&b[i]<=90)
        {c++;}
        else{
        if(c>k)
        {
            k=c;
            
        }
        c=0;
        }
    }
    if(c>k){my_printf("%d",c);}
    else my_printf("%d",k);
    
    
    
    return 0;
}
