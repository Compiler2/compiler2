#define NUM_ITER 524

#include <header.h>

int main_bench()  {
    int m,n,row,col,x,y,p,q;
    my_scanf("%d %d",&m,&n);
    int sz[m+2][n+2];
    for(row=0;row<m+2;row++){
        for(col=0;col<n+2;col++){
            if(row==0||row==m+1||col==0||col==n+1){
                sz[row][col]=0;
            }else{
              my_scanf("%d",&(sz[row][col]));
            }
        }
    }
    for(row=1;row<m+1;row++){
        for(col=1;col<n+1;col++){
            if(sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col+1]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row-1][col]){
                my_printf("%d %d\n",row-1,col-1);
            }
        }
    }
    return 0;
}

