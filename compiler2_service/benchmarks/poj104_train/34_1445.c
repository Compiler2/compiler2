#include <header.h>

int main_bench()
{
int m,n=0,y=0;
int i;
my_scanf("%d",&m);
n=m;
y=n;
    for(i=0;i<100;i++)
{
if(y==0||y==1)
{
my_printf("End\n");
break;
}
else
{
if(n%2==0)
{
            y=n/2;
my_printf("%d/2=%d\n",n,y);
n=y;
}
else 
{
y=n*3+1;
my_printf("%d*3+1=%d\n",n,y);
n=y;
}

}
}
return 0;
}
