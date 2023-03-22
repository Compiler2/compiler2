#include <header.h>

int main_bench()
{
    int a,b;
    my_scanf("%d",&a);
    if(a==1)
    my_printf("End");
    else
    {do
       {
                   if (a%2==0)
                   {b=a/2;
                   my_printf("%d/2=%d\n",a,b);
                   a=b;}
                   else
                  { b=a*3+1;
                   my_printf("%d*3+1=%d\n",a,b);
                   a=b;}
}
     while(a>1);
my_printf("End");
}
getchar();
getchar();
getchar();
getchar();
getchar();
}
