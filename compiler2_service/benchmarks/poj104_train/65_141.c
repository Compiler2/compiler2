#define NUM_ITER 35035

#include <header.h>

int main_bench()
{
    int n,x=0,y,z=0;
    my_scanf("%d",&n);
    int c[n],d[n];
    for(int i=0;i<n;i++){
        my_scanf("%d %d",&c[i],&d[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]==d[i]){z++;}
        if(c[i]==0&&d[i]==1){x++;}
        if(c[i]==1&&d[i]==2){x++;}
        if(c[i]==2&&d[i]==0){x++;}
    }
    y=n-x-z;
    if(x==y){my_printf("Tie");}
    if(x<y){my_printf("B");}
    if(x>y){my_printf("A");}
    return 0;
}