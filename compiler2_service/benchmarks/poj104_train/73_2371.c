#define NUM_ITER 200203

#include <header.h>

int main_bench()
{
    int a[5][5];
    int cow,col,i,j,k,t,max,min,cow1,t1,m=0;
    for(cow=0;cow<=4;cow++){
    for(col=0;col<=4;col++){
    my_scanf("%d",&a[cow][col]); 
    }
    }
    for(cow=0;cow<=4;cow++){
    max=a[cow][0];
    for(i=0;i<=4;i++){
    if(a[cow][i]>=max){
    max=a[cow][i];
    t=i;
    }
    } 
    k=0; 
    min=a[cow][t];
    for(j=0;j<=4;j++){ 
    if(a[j][t]<=min&&j!=cow)
    k=1;
    } 
    if(k==0){
    cow1=cow+1;
    t1=t+1; 
    m=1 ; 
    my_printf("%d %d %d\n",cow1,t1,a[cow][t]);
    } 
    } 
    if(m==0)
    my_printf("not found");
    return 0; 
} 

   