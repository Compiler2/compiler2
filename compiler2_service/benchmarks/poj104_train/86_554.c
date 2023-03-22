#define NUM_ITER 1426

#include <header.h>

int main_bench(){
    int n,sa[100000],sb[10000],i,j,x;
    my_scanf("%d",&n);
   
    for(i=0;i<n;i++){
           
            my_scanf("%d",&x);
           
            for(j=0;j<x;j++){my_scanf("%d",&sa[j]);}
            sb[i]=60;
            for(j=0;j<x;j++){
                    sb[i]-=3;
                    if(sb[i]-sa[j]<=0&&sb[i]-sa[j]>=-3){sb[i]=sa[j];break;}
                    else if(sb[i]-sa[j]<0){sb[i]=sb[i]+3;break;}
                    if(sb[i]-sa[j]>0){continue;}
                    }
            }
            for(i=0;i<n;i++){
                    my_printf("%d\n",sb[i]);
                    }
    
    return 0;
}
