#define NUM_ITER 2993

#include <header.h>

int main_bench(){
    int n,k,i,a,b,c;
    int sz[1000];
    c=0;
    my_scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        my_scanf("%d",&(sz[i]));
    } 
    for(int a=0;a<n;a++){
        for(i=0;i<n;i++){
            b=sz[a]+sz[i];
              if(sz[a]+sz[i]==k){
            c++;
              }
              else{continue;}
           }
        }
    if(c==0){
        my_printf("no");
      }
       if(c>0){
        my_printf("yes");
      }
    return 0;
}
