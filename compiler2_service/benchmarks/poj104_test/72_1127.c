#include <header.h>

int main_bench(){
    int N=100;
    int a[N][N],m,n,i,b,c,d;
    my_scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++){
        for(b=1;b<=n;b++){
            my_scanf("%d",&a[i][b]);
        }
    }
    for(i=1;i<=m;i++){
        for(b=1;b<=n;b++){
            if(a[i][b]>=a[i][b-1]&&a[i][b]>=a[i][b+1]&&a[i][b]>=a[i-1][b]&&a[i][b]>=a[i+1][b]){c=i-1;d=b-1;my_printf("%d %d\n",c,d);}
        }
    }
    return 0;
}