#define NUM_ITER 55365

#include <header.h>




void invert(int ip[],int n)
{
    
    int i;
    int s=1;
    
    for(i=0;i<n;i++)
    {
        if(s==1){my_printf("%d",ip[n-1-i]);s=0;}
        else{my_printf(" %d",ip[n-1-i]);}
        
    }
    return;
    
}

int main_bench() {

    int n;
    my_scanf("%d",&n);
    int ip[n];
    int i;
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&(ip[i]));
    }
    invert(ip,n);
    
    return 0;
}