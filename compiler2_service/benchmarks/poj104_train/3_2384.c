#define NUM_ITER 8905

#include <header.h>

int main_bench(){
    int n,k,a,b,i,j,s;
    int sz[2000];
    my_scanf("%d %d",&n,&k);
    s=0;
    for(i=0;i<n;i++){
                     my_scanf("%d",&sz[i]);}
    for(i=0;i<n;i++){
                     for(j=i+1;j<n;j++){a=sz[i];
                                        b=sz[j];
                                        if(a+b==k){s++;}}}
    if(s!=0){my_printf("yes");}
    else{my_printf("no");}
    return 0;
}