#define NUM_ITER 2052

#include <header.h>

int main_bench(){
    int a[500],n,b[500];
    b[0]=0;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
             my_scanf("%d",&a[i]);
             } 
    for(int m=1;m<=n;m++){
            b[m]=10000;
            for(int j=0;j<n;j++){
                    if(a[j]%2==1&&a[j]>b[m-1]&&a[j]<b[m])
                      b[m]=a[j];
                    }
            if(m==1)
              my_printf("%d",b[m]);
            else if(b[m]!=10000)
              my_printf(",%d",b[m]);
            }
    return 0;
}