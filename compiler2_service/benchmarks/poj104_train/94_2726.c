#include <header.h>

 int main_bench(){
     int n,t=0,e;
     my_scanf("%d",&n);
     int s[n];
     for(int i=1;i<=n;i++){
         my_scanf("%d",&s[i]);
         if(s[i]%2==0){
             s[i]=0;
             t+=1;
         }
     }
     t=n-t;
     for(int m=n-1;m>=1;m--){
         for (int r=1;r<=m;r++){
             if(s[r]>s[r+1]){
                 e=s[r];
                 s[r]=s[r+1];
                 s[r+1]=e;
             }
         }
     }
     for(int i=n-t+1;i<n;i++){
         my_printf("%d,",s[i]);
     }
     my_printf("%d",s[n]);
     return 0;
 }
   