#include <header.h>

int main_bench()
{
    void m(int a,int b);
    int n,k;
    my_scanf("%d%d",&n,&k);
    m(n,k);             
    return 0;
}

void m(int a,int b)
{
    int i,j,k,m=0,sum;
    for(j=1;m<a-1;j++){
        sum=j*(a-1);   
        k=0;
        while(k<a){
            if((sum*a/(a-1)+b)%(a-1)==0){
                sum=sum*a/(a-1)+b;  
                k++;  
                m=k;   
                if(k==a-1){
                    my_printf("%d",sum*a/(a-1)+b);
                }                
            }
            else 
                break;            
        }   
    }   
}