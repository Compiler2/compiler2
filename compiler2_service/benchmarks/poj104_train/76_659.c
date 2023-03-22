#define NUM_ITER 1522

#include <header.h>

int main_bench(){
    int n,i,j;
    int a[50000]={0};
    int b[50000]={0};
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a[i],&b[i]);
    }
    int min=a[0],max=b[0];
    for(i=0;i<n;i++){
            if(a[i]<min){min=a[i];}
            if(b[i]>max){max=b[i];}
        
    }
    int count;
    int legal=0;
    double k;
    for(k=(double)min;k<=(double)max;k=k+0.5){
        for(j=0,count=0;j<n;j++){
            if(k>=a[j]&&k<=b[j]){count++;}
        }
        if(count==0){my_printf("no");break;}
        else{legal++;}
    }
    if(legal==(max-min)*2+1){my_printf("%d %d",min,max);}
    return 0;
    
}