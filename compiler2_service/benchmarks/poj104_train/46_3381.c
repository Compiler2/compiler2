#define NUM_ITER 578

#include <header.h>

int main_bench(){
    int r,c,i,k,j,p;
    my_scanf("%d %d",&r,&c);
    int a[1000][1000];
    for(i=0;i<r;i++){
        for(k=0;k<c;k++){
            my_scanf("%d",&a[i][k]);
        }
    }
    int s=0;
    int h=0;
    i=0;
    j=0;
    p=r*c;
    while(j<p){
     for(i=s,k=h;k<c;k++){
         if(j<p){
         my_printf("%d\n",a[i][k]);
         j++;
         }
     }
     s++;
     for(i=s,k=c-1;i<r;i++){
         if(j<p){
         my_printf("%d\n",a[i][k]);
         j++;
         }
     }
     c--;
     for(k=c-1,i=r-1;k>=h;k--){
         if(j<p){
         my_printf("%d\n",a[i][k]);
         j++;
         }
     }
     r--;
     for(i=r-1,k=h;i>=s;i--){
         if(j<p){
             my_printf("%d\n",a[i][k]);
             j++;
         }
     }
     h++;
     }
    return 0;
}


