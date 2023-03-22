#define NUM_ITER 8766

#include <header.h>

int ss[10000],sz[10000],xiaoshi[10000];
int main_bench(){
int i,n,hour=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %d\n",&ss[i],&sz[i]);
}
for(i=0;i<n;i++){
if((ss[i])>=90&&(ss[i])<=140&&(sz[i])>=60&&(sz[i])<=90){
    hour++;
    xiaoshi[i]=hour;
    }
    else{
       hour=0;
    }
}   
    int e;
    for(int k=1;k<=n;k++){
       for(int i=0;i<n-k;i++){
       if(xiaoshi[i+1]<xiaoshi[i]){
       e=xiaoshi[i+1];
       xiaoshi[i+1]=xiaoshi[i];
       xiaoshi[i]=e;               }
                              }
                          }
    my_printf("%d",xiaoshi[n-1]);
    return 0;
}


