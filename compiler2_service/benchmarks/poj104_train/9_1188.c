#define NUM_ITER 15329

#include <header.h>

int main_bench(){
    int i,j=0,k,m,n,e,x,s[100],t[100],v=0;
    char zfc[100][10],jg[100][10],h[100][10];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%s",zfc[i]);
        my_scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++){
       if(s[i]>=60){
          t[j]=i;
          j++;
       }
    }
    for(i=j;i>=0;i--){
        for(k=0;k<i-1;k++){
           if(s[t[k]]<s[t[k+1]]){
             m=t[k+1];
             t[k+1]=t[k];
             t[k]=m;
            }
         }
    }
    for(i=0;i<j;i++){
      puts(zfc[t[i]]);
    }
    for(i=0;i<n;i++){
      if(s[i]<60){
         puts(zfc[i]);
      }
    }
    return 0;
}