#define NUM_ITER 585

#include <header.h>

int main_bench(){
    int row,col,i,j,g,k,p,num,time=0;
    int sz[110][110];
    my_scanf("%d%d",&row,&col);
    num=row*col;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            my_scanf("%d",&sz[i][j]);        }}  
    for(i=0;;i++){
        for(j=i;j<col-i;j++){
            my_printf("%d\n",sz[i][j]);time++;}
          if(time==num){break;}
        for(g=1+i;g<row-i;g++){
            my_printf("%d\n",sz[g][col-1-i]);time++;}
          if(time==num){break;}    
        for(k=col-2-i;k>=i;k--){
            my_printf("%d\n",sz[row-1-i][k]);time++;}
          if(time==num){break;}
        for(p=row-2-i;p>i;p--){
            my_printf("%d\n",sz[p][i]);time++;}
          if(time==num){break;}
    }
}

