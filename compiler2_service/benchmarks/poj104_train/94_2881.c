#define NUM_ITER 15690

#include <header.h>

int main_bench(){
    int N,i,j,s;
    my_scanf("%d",&N);
    int jishu[501];
    int sz[501];
    j=0;
    for(int i=0;i<N;i++){
        my_scanf("%d" ,&sz[i]);
        if(sz[i]%2==1){
            jishu[j]=sz[i];
            j++;
        }
    }
    s=j;
    int e;
    for(int i=0;i<s;i++){
      for(int j=0;j<s-i;j++){
         if(jishu[j]>jishu[j+1]){
             e=jishu[j];
             jishu[j]=jishu[j+1];
             jishu[j+1]=e;
         }
      }  
    }
    for(int j=0;j<s;j++){
       if(j!=s-1){
        my_printf("%d,",jishu[j]);
        }else{
            my_printf("%d",jishu[j]);
        }
    }
      
   return 0;
}
