#include <header.h>


int main_bench()
{
    int a,r,b;
    my_scanf("%d",&a);
    if(a==1)
    my_printf("End");
    else       
       { if (a%2==0)
       {r=a/2;
       b=r;
    my_printf("%d/2=%d\n",a,r);}
    else
    {r=(a*3)+1;
    b=r;
    my_printf("%d*3+1=%d\n",a,r);  }
while(b!=1)
    {  if (b%2==0)
              {r=b/2;
       
    my_printf("%d/2=%d\n",b,r);
    b=r;}
    else
    {r=b*3+1;
   
    my_printf("%d*3+1=%d\n",b,r);  
     b=r;}
    
    }my_printf("End");}
    getchar();
    getchar();    }