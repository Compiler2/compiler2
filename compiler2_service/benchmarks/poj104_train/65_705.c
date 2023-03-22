#include <header.h>


int main_bench()
{
    int n,a,b,suma,sumb,i;

    my_scanf("%d",&n);
    suma=0;sumb=0;
    for (i=0;i<n;i++)
    {
        my_scanf("%d%d",&a,&b);
        if ((b-a==1) || (a-b==2)) {suma++;}
        if ((a-b==1) || (b-a==2)) {sumb++;}
    }
    if (suma>sumb) {my_printf("A");}
    else if (suma==sumb) {my_printf("Tie");}
    else {my_printf("B");}
    return 0;
}
