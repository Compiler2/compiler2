#include <header.h>




int main_bench(){
    int row,col,r,c,a[100][100],s,n;
    my_scanf("%d%d",&row,&col);
    s=0;
    for(r=0;r<row;r++){
        for(c=0;c<col;c++){
            my_scanf("%d",&a[r][c]);
        }
    }for(n=0;n<100;n++){
        for(c=n;c<col-n;c++){
            my_printf("%d\n",a[n][c]);
            s++;
        }
        my_printf("\n");
        if(s==row*col){
            break;
        }for(r=n+1;r<row-n;r++){
            my_printf("%d\n",a[r][col-1-n]);
            s++;
        }my_printf("\n");
        if(s==row*col)
        break;
        for(c=col-2-n;c>=n;c--){
            my_printf("%d\n",a[row-1-n][c]);
            s++;
        }
        my_printf("\n");
        if(s==row*col)
        break;
        for(r=row-2-n;r>n;r--){
            my_printf("%d\n",a[r][n]);
            s++;
        }my_printf("\n");
        if(s==row*col){
            break;
        }
    }
    return 0;
}