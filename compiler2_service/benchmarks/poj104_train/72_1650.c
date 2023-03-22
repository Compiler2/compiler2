#define NUM_ITER 562

#include <header.h>

int main_bench(){
    int a[101][101]={0};
    int x,y,h=0,i,m,n;
    my_scanf("%d%d",&m,&n);
    for(x=1;x<m+1;x++){
        for(y=1;y<n+1;y++){
            my_scanf("%d",&a[x][y]);
        }
    }
    for(x=1;x<m+1;x++){
        for(y=1;y<n+1;y++){
            if(a[x][y]>=a[x][y-1]&&a[x][y]>=a[x][y+1]&&a[x][y]>=a[x+1][y]&&a[x][y]>=a[x-1][y]){
                my_printf("%d %d\n",x-1,y-1);
            }
        }
    }
    return 0;
}