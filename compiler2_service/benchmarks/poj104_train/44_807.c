#define NUM_ITER 422049

#include <header.h>

 

 int f(int n)

{
     int m=0;
while(n!=0){
       m=m*10+n%10;
       n=n/10;
}
return m;
}

 

int main_bench()
{
   int a;
    for(int i=0;i<6;i++){
            my_scanf("%d",&a);
            my_printf("%d\n",f(a));
            }
    
    

    return 0;
    }