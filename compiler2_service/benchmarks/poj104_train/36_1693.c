#include <header.h>

int main_bench()
{
    char a[1000],b[1000];
    int i,la,lb,A[1000]={0},B[1000]={0};
    my_scanf("%s",a);
    my_scanf("%s",b);
    la=strlen(a);
    lb=strlen(b);
    if(la!=lb)
    {
        my_printf("NO");
        return 0;
    }
    else
    {
        for(i=0;i<la;i++)
        {
            A[a[i]]++;
            B[b[i]]++;
        }
    }
    for(i=0;i<1000;i++)
    {
        if(A[i]!=B[i])
        {
        my_printf("NO");
        break;
        }
        if(i==999)
        {
            my_printf("YES");
            break;
        }
    }
    return 0;
}
