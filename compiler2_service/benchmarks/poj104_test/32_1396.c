#define NUM_ITER 11108

#include <header.h>

int main_bench()
{
    int n,time,i,j,len1,len2;
    char a[200],b[200];
    my_scanf("%d",&n);
    for(time=0;time<n;time++)
    {
        my_scanf("%s",a);
        my_scanf("%s",b);
        len1=strlen(a);
        len2=strlen(b);
        j=0;
        for(i=0;i<len1;i++)
        {
            if(i<len2)
                a[len1-i-1]-=(b[len2-i-1]-'0');
            if(a[len1-i-1]<'0')
                a[len1-i-2]-=1;
        }
        j=0;
        for(i=0;a[i]!=0;i++)
        {
            if(a[i]!='0')j=1;
            if(j)my_printf("%c",(a[i]>='0'?a[i]:a[i]+10));
        }
        my_printf("\n");
    }
    return 0;
}
