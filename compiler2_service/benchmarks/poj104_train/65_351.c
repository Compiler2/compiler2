#include <header.h>

int main_bench()
{
    int a=0,b=0,j,k,n;
    my_scanf("%d",&n);
    while(n>0){
    my_scanf("%d%d",&j,&k);
          if(j==k)
          {
                  a++;
                  b++;
                  } 
          else{
               if((j==0&&k==1)||(j==1&&k==2)||(j==2&&k==0))
               a++;
               else
               b++;
               }
               n--;
    }
    if(a>b)
    my_printf("A");
    if(a<b)
    my_printf("B");
    if(a==b)
    my_printf("Tie");
}