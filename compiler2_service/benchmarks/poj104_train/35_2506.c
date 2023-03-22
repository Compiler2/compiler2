#define NUM_ITER 422

#include <header.h>

int main_bench(){
    int m,n,i,j,max,min,c;
    my_scanf("%d,%d",&m,&n);
    int a[m][n],b[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            my_scanf("%d",&a[i][j]);
            b[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
        max=a[i][0];
        for(j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        for(j=0;j<n;j++){
            if(a[i][j]==max){
                b[i][j]++;
            }
        }
    }
    for(i=0;i<n;i++){
        min=a[0][i];
        for(j=0;j<m;j++){
            if(a[j][i]<min){
                min=a[j][i];
            }
        }
        for(j=0;j<m;j++){
            if(a[j][i]==min){
                b[j][i]++;
            }
        }
    }
    c=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==2){
                my_printf("%d+%d\n",i,j);
                c++;
            }
        }
    }
    if(c==0){
    my_printf("No");
    }
    return 0;
}
