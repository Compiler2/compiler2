#include <header.h>


void work(int m);
int main_bench(){
    int n;
    my_scanf("%d",&n);
    work(n);
    return 0;
}
void work(int m){
    int a[m],b[m];
    int i,j,k,man,hear,l;
    l=0;
    for(i=0;i<=m-1;i++){
        a[i]=1;
        b[i]=0;
    }
    for(j=1;j<=m*m;j++){
        my_scanf("%d %d",&man,&hear);
        if(man==hear)break;
        a[man]=0;
        b[hear]=b[hear]+1;
    }
    for(k=0;k<=m-1;k++){
        if(a[k]==1){
            if(b[k]==m-1){
                my_printf("%d",k);
                l=1;
                break;
            }
            
        }
    }
    if(l==0)my_printf("NOT FOUND");
    
}