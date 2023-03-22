#include <header.h>

int main_bench(){
    double n,k;
    int i,j=0;
    int p,q;
    my_scanf("%lf",&n);
    char sz[2][1000];
    my_scanf("%s %s",sz[0],sz[1]); 
    p=strlen(sz[0]);
    q=strlen(sz[1]);
    if(p!=q){
        my_printf("error");
        return 0;
    }
   for(i=0;i<q;i++){
       if(sz[0][i]!='A'&&sz[0][i]!='T'&&sz[0][i]!='C'&&sz[0][i]!='G'){
           my_printf("error");
           return 0;
       } if(sz[1][i]!='A'&&sz[1][i]!='T'&&sz[1][i]!='C'&&sz[1][i]!='G'){
           my_printf("error");
           return 0;
       }
   }
    for(i=0;sz[0][i]!='\0';i++){
        if(sz[0][i]==sz[1][i]){
            j++;
        }
    }k=1.0*j/i;
    if(k>n){
        my_printf("yes");
    }else{
        my_printf("no");
    }
    return 0;
}
