#define NUM_ITER 1963

#include <header.h>

int main_bench(){
    int a[49998][2],n,i,j;
    my_scanf("%d",&n);
    for (i=0;i<n;i++){
       for(j=0;j<2;j++){
          my_scanf("%d",&a[i][j]);
       }
    }
    for (j=0;j<n;j++){
       for (i=1;i<n;i++){
          if((a[0][0]<=a[i][1]&&a[0][1]>=a[i][0])||(a[0][0]>=a[i][1]&&a[0][1]<=a[i][0])){
                    a[0][0]=(a[0][0]>a[i][0])?a[i][0]:a[0][0];
                    a[0][1]=(a[0][1]>a[i][1])?a[0][1]:a[i][1];
            }
       }
    }
    for (i=1;i<n;i++){
          if((a[0][0]>a[i][0])||(a[0][1])<a[i][1]){     
                    my_printf("no"); 
                    break;
          }
    }
    if (i==n){ 
          my_printf("%d %d",a[0][0],a[0][1]);
    }
    return 0;
}
