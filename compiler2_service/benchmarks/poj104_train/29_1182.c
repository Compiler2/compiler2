#include <header.h>

int main_bench(){
    int m,sz[100],i,j;
    double a=1,b=2,sz1[100],d;
    my_scanf("%d",&m);
    for(i=0;i<m;i++){
        my_scanf("%d",&sz[i]);
    }
    for(i=0;i<m;i++){
        sz1[i]=0;
    }
    for(i=0;i<m;i++){
        for(j=0;j<sz[i];j++){
            sz1[i]+=(b/a);
            d=b;
            b+=a;
            a=d;
        }
        a=1;b=2;
    }
    for(i=0;i<m;i++){
        my_printf("%.3lf\n",sz1[i]);
    }
    return 0;
}