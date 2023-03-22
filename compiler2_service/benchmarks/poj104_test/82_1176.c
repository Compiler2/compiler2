#define NUM_ITER 29768

#include <header.h>

int main_bench(){
    int a[100],b[100];
    int n,k=0,i,max=0;
    int shuzu[100]={0};
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d %d",&a[i],&b[i]);
                     }
    for(i=0;i<n;i++){
                     if(a[i]<=140&&a[i]>=90&&b[i]>=60&&b[i]<=90){
                                                                k++;
                                                                shuzu[i]=k;
                     }else{
                           k=0;
                           }
    }
    for(i=0;i<n;i++){
                     if(shuzu[i]>max){
                                      max=shuzu[i];
                                      }
                     }
    my_printf("%d",max);
    return 0;
}
