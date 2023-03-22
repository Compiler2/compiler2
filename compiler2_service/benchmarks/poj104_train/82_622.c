#define NUM_ITER 36896

#include <header.h>

int main_bench()
{
int n,a,b,i,j,t;
j=0;
t=0;
my_scanf("%d",&n);
for(i=1;i<=n;i=i+1)
   {
    my_scanf("%d %d",&a,&b);
    if((a>=90&&a<=140)&&(b>=60&&b<=90))
        {
         j=j+1;
         }
    else
        {
         if(t<j){t=j;j=0;}
         else {j=0;}
        }
   }
if(t<j){t=j;}
my_printf("%d",t);
return 0;
}