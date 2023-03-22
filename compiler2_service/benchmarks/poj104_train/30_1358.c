#include <header.h>

int main_bench()
{
 int n,i,sum=0;
 my_scanf("%d",&n);
 for(i=1;i<=n;i++)
   if(i%7!=0)
     if((i-7)%10!=0)
       if(i-70<0||i-70>=10) 
           sum+=i*i;
   my_printf("%d",sum);
  return 0;
}
