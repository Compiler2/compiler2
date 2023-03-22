#include <header.h>


int main_bench()

{

    int n,i,m,a,p,q,b;

    my_scanf("%d",&n);

    my_scanf("%d",&p);

    my_scanf("%d",&q);

    if(p>q){

       a=p;

b=q;

    }

    else if(p<=q){

       a=q;

       b=p;

    }

    i=3;

    while(i<=n){

    my_scanf("%d",&m);

    if(m>a){

       b=a;

       a=m;

    }

else if(m>b){

       b=m;

    }

    i++;

    }

    my_printf("%d\n%d\n",a,b);

    return 0;

}
