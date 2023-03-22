#include <header.h>

int main_bench()
{
    int n,i,sum=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
         if(i%7!=0&&i%7!=7&&i!=71&&i!=72&&i!=73&&i!=74&&i!=75&&i!=76&&i!=78&&i!=79&&i%10!=7){
            sum=sum+i*i;}
     }
   my_printf("%d",sum);
return 0;
}
                  


