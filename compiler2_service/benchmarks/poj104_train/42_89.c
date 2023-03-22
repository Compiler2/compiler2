#include <header.h>


main_bench(){
       int a[100000];
       int i,j,n,k,sum;
       my_scanf("%d",&n);
       sum=n;
       for(i=0;i<n;i++){
           my_scanf("%d",&a[i]);
       }
       my_scanf("%d",&k);
       for(i=0;i<sum;i++){
           if(a[i]==k){
               sum=sum-1;
               for(j=i;j<sum;j++){
                   a[j]=a[j+1];
               }
           i=i-1;
           }
       }
       for(i=0;i<sum-1;i++){
           my_printf("%d ",a[i]);
       }
       my_printf("%d",a[sum-1]);
}
