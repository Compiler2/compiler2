#include <header.h>

int main_bench(){
    int i,n,a,b,c,A,B;
    my_scanf("%d",&n);
    for(a=0,b=0,c=0,i=0;i<n;i++){
        my_scanf("%d %d",&A,&B);
        if((A==0)&&(B==1)){
            a++;
        }
        else if((A==1)&&(B==2)){
            a++;
        }
        else if((A==2)&&(B==0)){
            a++;
        }
        else if((A==1)&&(B==0)){
            b++;
        }
        else if((A==2)&&(B==1)){
            b++;
        }
        else if((A==0)&&(B==2)){
            b++;
        }
        else if((B==0)&&(A==0)){
            c++;
        }        
        else if((B==1)&&(A==1)){
            c++;
        }        
        else if((B==2)&&(A==2)){
            c++;
        }       
        
    }
    
    if(a>b){
        my_printf("A");
    }
    else if(a==b){
        my_printf("Tie");
    }
    else if(a<b){
        my_printf("B");
    }
    return 0;
}
