#include <header.h>

int main_bench()
{
    int m,i,a,r;
    
    int sz[500],hz[500];
    my_scanf("%d\n",&m);
    for(i=0;i<m;i++){
        my_scanf("%d",&(sz[i]));
       
    } 
    int j;
    j=0;
    for(i=0;i<m;i++){
        if(sz[i]%2!=0){
           
            hz[j]=sz[i];
            j++;
        }
    }
    for(a=j-1;a>0;a--){
        for(r=0;r<a;r++){
            if(hz[r]>hz[r+1]){
                int tmp=hz[r+1];
                hz[r+1]=hz[r];
                hz[r]=tmp;
            }
        }
    }
        
    
    for(i=1;i<=j-1;i++){
        my_printf("%d,",hz[i-1]);
    }
    my_printf("%d",hz[i-1]);
    return 0;
}


