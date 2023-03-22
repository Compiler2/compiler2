#include <header.h>

int main_bench(){
    int n;
    int sz[200][2];
    int i,j,a=0,b=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
         my_scanf("%d",&sz[i][j]);   
        }
   }
   for(i=0;i<n;i++){
       if(sz[i][0]==sz[i][1]){
           a++;
           b++;
       }
       if(sz[i][0]>=sz[i][1]){
          if(sz[i][0]==2&&sz[i][1]==0)
          a++;
          else
          b++;
       }
       if(sz[i][0]<=sz[i][1]){
          if(sz[i][0]==0&&sz[i][1]==2)
           b++;
           else
           a++;
       }
            
   }
   if(a>b){
       my_printf("A");
   }
   if(a==b){
       my_printf("Tie");
   }
   if(a<b){
       my_printf("B");
   }
   return 0;
}

