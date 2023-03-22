#define NUM_ITER 4333

#include <header.h>

int main_bench(){
    int n,i,p,e,s;
    my_scanf("%d\n",&n);
    struct qj{
        int a,b;
    }qj[50000];
    for(i=0;i<n;i++){
        my_scanf("%d %d\n",&(qj[i].a),&(qj[i].b));
    }
    for(p=0;p<n;p++){
        for(i=n-1;i>p;i--){
            if(qj[i].a<qj[i-1].a){
                e=qj[i].a;
                qj[i].a=qj[i-1].a;
                qj[i-1].a=e;
            }
            if(qj[i].b<qj[i-1].b){
                e=qj[i].b;
                qj[i].b=qj[i-1].b;
                qj[i-1].b=e;
            }
        }
    }
    s=0;
    for(i=1;i<n;i++){
        if(qj[i].a>qj[i-1].b){s=1;}
    }
    if(s==1){
        my_printf("no");
    }else{my_printf("%d %d",qj[0].a,qj[n-1].b);}
    return 0;
}
