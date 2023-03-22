#define NUM_ITER 6063

#include <header.h>


int ex(int *x,int *y){
    int tmp=0;
    tmp=*x;
    *x=*y;
    *y=tmp;
    }
int main_bench(){
    int n,k;
    int s=0;
    int sz[1000];
    my_scanf("%d%d",&n,&k);
    for(int a=0;a<n;a++){
            my_scanf("%d",&(sz[a]));
            }
    for(int b=0;b<n;b++){
            for(int c=b+1;c<n;c++){
                    if((sz[c])+(sz[b])==k){
                                        s++;
                                        }
                    }
            }
    if(s==0){
             my_printf("no");
             }else{
    my_printf("yes");}

    return 0;
    }