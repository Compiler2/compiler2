#include <header.h>


int main_bench()
{
int n,i;
int a=0,b=0;
int x,y;

my_scanf("%d\n",&n);
for(i=0;i<n;i++)
{
                my_scanf("%d %d\n",&x,&y);
                if(x==y){a++;b++;}
                else
                if(x-y==-1||x-y==2)a++;
                else
                b++;
}

if(a==b)my_printf("Tie");
else
if(a>b)my_printf("A");
else
my_printf("B");


    
}