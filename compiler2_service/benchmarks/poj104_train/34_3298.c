#define NUM_ITER 327187

#include <header.h>



main_bench(){
       int n,a,b,i;
       my_scanf("%d",&n);
       if(n==1) my_printf("End\n");
       else{
            a=n;b=n;
           for(;;){
             if(a==1) break;
             if(a%2==0){
               b=a/2;
               my_printf("%d/2=%d\n",a,b);
               a=b;
             }
             else{
               b=a*3+1;
               my_printf("%d*3+1=%d\n",a,b);
               a=b;
             }
           }
           my_printf("End\n");
       }
}
