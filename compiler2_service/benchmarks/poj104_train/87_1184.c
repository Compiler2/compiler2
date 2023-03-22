#define NUM_ITER 104349

#include <header.h>

int main_bench(){
    int i,j;
    int a[10][6],b[10];
    for(i=0;i<10;i++){
        for(j=0;j<6;j++){
          my_scanf("%d",&a[i][j]);  
        }
    }
    for(i=0;i<10;i++){
        if(a[i][0]!=0){
        b[i]=(12*3600-a[i][0]*3600-a[i][1]*60-a[i][2]+a[i][3]*3600+a[i][4]*60+a[i][5]);
        my_printf("%d\n",b[i]);}
        else{break;}
    }
    return 0;
}
