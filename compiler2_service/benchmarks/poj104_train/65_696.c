#define NUM_ITER 33495

#include <header.h>

int main_bench(){
    int as=0,bs=0,n,a[200],b[200],i,j;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
       my_scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
       if(a[i]==b[i]){as++;bs++;}
       else{if(a[i]==1&&b[i]==0){bs++;}
       else{if(a[i]==1&&b[i]==2){as++;}
       else{if(a[i]==0&&b[i]==1){as++;}
       else{if(a[i]==0&&b[i]==2){bs++;}
       else{if(a[i]==2&&b[i]==0){as++;}
       else{if(a[i]==2&&b[i]==1){bs++;}}}}}}}
    }
    if(as==bs){my_printf("Tie");}
    else{if(as>bs){my_printf("A");}
    else{my_printf("B");}}
    return 0;
    }