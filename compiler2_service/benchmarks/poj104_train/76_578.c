#define NUM_ITER 5181

#include <header.h>

int main_bench(){
    int n,i,k,s,t,x;
    my_scanf("%d",&n);
    struct q
    {
        int a,b;
    }
    m[n],e;
    for(i=0;i<n;i++){
        my_scanf("%d %d",&(m[i].a),&(m[i].b));
    }
    for(k=1;k<=n;k++){
        for(i=0;i<n-k;i++){
            if((m[i].a)>(m[i+1].a)){
                e=m[i+1];
                m[i+1]=m[i];
                m[i]=e;
            }
        }
    }
    
    
    
    
    
    
    s=0;
    x=m[0].b;
    for(i=0;i<(n-1);i++){
       if(x<m[i+1].a){
            s=1;
       }
       if(x<m[i+1].b){
           x=m[i+1].b;
       }
    }
    t=m[0].b;
    for(i=1;i<n;i++){
        if(m[i].b>t){
            t=m[i].b;
        }
    }
    if(s>0){
        my_printf("no");
    }else{
        my_printf("%d %d",m[0].a,t);
    }
    return 0;
}