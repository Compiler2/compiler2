#include <header.h>

int main_bench(){
    int n,i,k,j;
    int m;
    my_scanf("%d",&n);
    char dc[50];
    for(i=0;i<n;i++){
        my_scanf("%s",dc);
       
       m=strlen(dc)-1;
     
     if(dc[m]=='g'){
         dc[m-2]=0;
     }
     else dc[m-1]=0;
    
    my_printf("%s\n",dc);
    }
    
}

