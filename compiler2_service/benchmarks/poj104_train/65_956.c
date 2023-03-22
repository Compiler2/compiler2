#include <header.h>

int main_bench(){
    int a=0,b=0;
    int i,n;
    int A[200],B[200];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
    my_scanf("%d%d",&A[i],&B[i]);}
    for(i=0;i<n;i++){
    if(A[i]==0&&B[i]==1){
        a++;
    }else if(A[i]==0&&B[i]==2){
        b++;
    }else if(A[i]==0&&B[i]==0){
        a++;
        b++;
    }else if(A[i]==1&&B[i]==2){
        a++;
    }else if(A[i]==1&&B[i]==0){
        b++;
    }else if(A[i]==1&&B[i]==1){
        a++;
        b++;
    }else if(A[i]==2&&B[i]==0){
        a++;
    }else if(A[i]==2&&B[i]==1){
        b++;
    }else if(A[i]==2&&B[i]==2){
        a++;
        b++;
    }
    }  
  if(a>b){
      my_printf("A");
  }else if(a<b){
      my_printf("B");
  }else if(a==b){
      my_printf("Tie");
  }
    return 0;
}
