#define NUM_ITER 30380

#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=1;i<=n;i++){my_scanf("%d %d\n",&a[i-1],&b[i-1]);}
    int c=0;
    int d=0;
    for(int i=1;i<=n;i++){
        if((a[i-1]==0&&b[i-1]==1)||(a[i-1]==1&&b[i-1]==2)||(a[i-1]==2&&b[i-1]==0)){c++;}
        if((b[i-1]==0&&a[i-1]==1)||(b[i-1]==1&&a[i-1]==2)||(b[i-1]==2&&a[i-1]==0)){d++;}
    }
    if(c>d){my_printf("A");}
    if(c<d){my_printf("B");}
    if(c==d){my_printf("Tie");}
    return 0;
}
