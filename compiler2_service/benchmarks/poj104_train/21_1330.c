#define NUM_ITER 5070

#include <header.h>

int main_bench()
{
    int n, i, j, num[1000], sum=0, t;
    double ans=0;
    my_scanf("%d", &n);
    for(i=0;i<n;i++){
        my_scanf("%d", &num[i]);
        sum+=num[i];
    }
      ans=(double)sum/n;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(num[j-1]>num[j]){
               t=num[j];
               num[j]=num[j-1];
               num[j-1]=t;}
          }
     }
    if(num[n-1]-ans==ans-num[0]){
       my_printf("%d,%d", num[0], num[n-1]);}
    else if(num[n-1]-ans>ans-num[0]){
       my_printf("%d", num[n-1]);}
    else if(num[n-1]-ans<ans-num[0]){
       my_printf("%d", num[0]);}
    return 0;
}
    