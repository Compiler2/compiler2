#define NUM_ITER 30202

#include <header.h>

int main_bench()
{
    int i,n,a[200],b[200],x=0,y=0;
    my_scanf("%d\n",&n);
    for(i=0;i<n-1;i++)
    {
        my_scanf("%d %d\n",&a[i], &b[i]);
    }
    my_scanf("%d%d",&a[n-1],&b[n-1]);
    for(i=0;i<n;i++)
    {
        if(a[i]==0&&b[i]==0){x=x+1;y=y+1;}
        if(a[i]==0&&b[i]==1){x=x+1;}
        if(a[i]==0&&b[i]==2){y=y+1;}
        if(a[i]==1&&b[i]==0){y=y+1;}
        if(a[i]==1&&b[i]==1){x=x+1;y=y+1;}
        if(a[i]==1&&b[i]==2){x=x+1;}
        if(a[i]==2&&b[i]==0){x=x+1;}
        if(a[i]==2&&b[i]==1){y=y+1;}
        if(a[i]==2&&b[i]==2){x=x+1;y=y+1;}
    }
    if(x>y){my_printf("A");}
    if(x<y){my_printf("B");}
    else if(x==y){my_printf("Tie");}
    return 0;
}
