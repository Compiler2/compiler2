#define NUM_ITER 18801

#include <header.h>

int main_bench(){
    int a[500];
    int b[500];
    int i,n,t,j,k,s,min;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&a[i]);             
                     }
    j=0;                 
    for(i=0;i<n;i++){
                     if(a[i]%2==1){b[j]=a[i];j++;t=j;}
                     }                 
    for(j=0;j<t;j++){
                     min=b[j];
                     s=j;
                     for(k=j+1;k<t;k++){if(b[k]<b[s]){min=b[k];s=k;}}
                     if(min<b[j]){b[s]=b[j];b[j]=min;}
    
                     }
    my_printf("%d",b[0]);
    for(j=1;j<t;j++)
    {my_printf(",%d",b[j]);}
  return 0;
    }