#define NUM_ITER 218645

#include <header.h>

int main_bench(){
    int sz[5][5];
    int row, col;
    for (row=0;row<5;row++){
        for (col=0; col<5;col++){
            my_scanf("%d", &sz[row][col]);
        }
    }
    int n, m;
    my_scanf("%d %d", &n, &m);
    int o, p, q, r, s;
    int i;
    if (n<=4&&n>=0&&m<=4&&m>=0){
        o=sz[n][0];
        p=sz[n][1];
        q=sz[n][2];
        r=sz[n][3];
        s=sz[n][4];
        for(i=0;i<5;i++){
            sz[n][i]=sz[m][i];
        }
        sz[m][0]=o;
        sz[m][1]=p;
        sz[m][2]=q;
        sz[m][3]=r;
        sz[m][4]=s;
        for(row=0; row<5;row++){
            for (col=0;col<4; col++){
                my_printf("%d ", sz[row][col]);
            }
            my_printf("%d\n",sz[row][4]);
        }
    }
    else {
        my_printf("error");
    }
    return 0;
}
