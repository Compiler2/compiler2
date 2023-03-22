#define NUM_ITER 3817

#include <header.h>

int main_bench(){
    
    int n,i,j,e,a[50000],b[50000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
            my_scanf("%d %d",&a[i],&b[i]);
    }
    for(j=1;j<=n;j++){
            for(i=0;i<n-j;i++){
                      if(a[i]>a[i+1]){
                               e=a[i+1];
                               a[i+1]=a[i];
                               a[i]=e;
                               e=b[i+1];
                               b[i+1]=b[i];
                               b[i]=e;
                      }
                      else if(a[i]==a[i+1]){
                               if(b[i]>b[i+1]){
                                   e=b[i+1];
                                   b[i+1]=b[i];
                                   b[i]=e;
                               }
                      }
            }
    }
    
    
    int tmp = b[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > tmp) 
            {my_printf("no\n");return 0;}
        if(tmp < b[i])
            tmp = b[i]; 
    }
    
    
    my_printf("%d %d",a[0],tmp);
    
    return 0;
}