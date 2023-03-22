#include <header.h>

int main_bench(){
    int n,k,i,j=0;
    int s[100];
    my_scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
         my_scanf("%d",&(s[i]));
         getchar();
    }
    my_printf ("%d",(s[0]));
    getchar();
    for(i=1;i<n;i++){
         for(k=0;k<i;k++){
             if(s[i]!=s[k]){
                  j++;
             }
         }
         if(j==i){
             my_printf(",%d",(s[i]));
             
         }
         j=0;
    }
    my_printf("\n");
    getchar();
    
    return 0;
}
