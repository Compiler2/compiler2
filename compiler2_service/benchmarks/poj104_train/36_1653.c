#include <header.h>

char f(char a[])
{
    int i,j,k=strlen(a);
    char temp;
    for(j=0;j<k;j++)
    {
        for(i=0;i<k-j;i++)
        {
            if(a[i]<a[i-1])
            {
                temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            }
        }
    }
    return'o';
}
int main_bench()
{
    char a1[1000],a2[1000];
    my_scanf("%s %s",a1,a2);
    f(a1);
    f(a2);
    if(strcmp(a1,a2)==0)
    {
        my_printf("YES");
    }
    else
    {
        my_printf("NO");
    }
    return 0;
}
