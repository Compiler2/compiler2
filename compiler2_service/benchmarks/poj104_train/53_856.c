#define NUM_ITER 8227

#include <header.h>


int main_bench()
{
    int n;
    int sum,sz=0;
    my_scanf("%d",&n);
    int a[300],b[300]={0};
    int i,j=0;
    for(i=0;i<n;i++){
                     my_scanf("%d",&a[i]);
                     }
    my_printf("%d",a[0]);
    for(i=0;i<n;i++){
                     for(j=0;j<i;j++){
                                      sum=0;
                                      if(a[i]==a[j]){
                                                     sum=sum+1;
                                                     break;}}
                               if(sum==0){
                                             my_printf(",%d",a[i]);}
                                                 }
    return 0;

}