#define NUM_ITER 53806

#include <header.h>

int main_bench(){
    int n,a,b,c,d,i;
    double x,y,z,t,e,f,g,h,m;
    a=0;
    b=0;
    c=0;
    d=0;
    my_scanf("%d\n",&n);
    int sz[n];
    for(i=0;i<n;i++){
        my_scanf("%d",&(sz[i]));
    }
    for(i=0;i<n;i++){
        if(sz[i]<=18){
            a=a+1;
        }else if(sz[i]>18&&sz[i]<36){
            b=b+1;
        }else if(sz[i]>35&&sz[i]<61){
            c=c+1;
        }else{
            d=d+1;
        }
    }
    e=a;
    f=b;
    g=c;
    h=d;
    m=n;
    x=e/m;
    y=f/m;
    z=g/m;
    t=h/m;
    my_printf("1-18: %.2lf%%\n",x*100);
    my_printf("19-35: %.2lf%%\n",y*100);
    my_printf("36-60: %.2lf%%\n",z*100);
    my_printf("Over60: %.2lf%%\n",t*100);
    return 0;
}

