#include <header.h>

int ss(int x)
{   int i;
    for(i=2;i<=x;i++)
       {
           if (x%i==0)
              if(i!=x)
                return(0);

       }
       return(1);
}
int main_bench()
{
    int a,b,n;
    my_scanf("%d",&n);
    if (n<5)
       {
           my_printf("empty");
           return 0;
       }
    for(a=2,b=0;a<=(n-2);a++)
       { if(ss(a))
           {

               b=a+2;
               if(ss(b))
                 {
                     my_printf("%d %d\n",a,b);
                 }

           }
       }
}

