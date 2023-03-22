#define NUM_ITER 914216

#include <header.h>

int main_bench()
{
    char a[100]={0},b[100]={0},c;
    int i=0,j,s1,s2;
    my_scanf("%s",a);
    my_scanf("%s",b);
    s1=strlen(a);
    s2=strlen(b);
    if(s1!=s2)
    {
        my_printf("NO");
        return 0;
    }
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s1;j++)
        {    
            if(a[i]==b[j])
            {
                b[j]=0;
                break;
            }
            else 
                continue;
        }
    }
    for(i=0;i<s1;i++)
    {
        if(b[i]!=0)
        {
            my_printf("NO");
            return 0;
        }
    }
    my_printf("YES");
    return 0;
}