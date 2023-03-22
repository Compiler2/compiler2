#define NUM_ITER 1263004

#include <header.h>

int main_bench()
{
    char a[100];
    my_scanf("%s",a);
    int n,i,m,f,j;
    n=strlen(a);
    int b[99];
    if(n==1)
    {
            my_printf("0\n");
            my_printf("%d",a[0]-'0');
    }
    else if(((a[0]-'0')*10+(a[1]-'0'))<13&&n==2)
    {
            my_printf("0\n");
            my_printf("%d",((a[0]-'0')*10+(a[1]-'0')));
    }
    else
    {
    m=((a[0]-'0')*10+(a[1]-'0'))/13;
    f=((a[0]-'0')*10+(a[1]-'0'))%13;
    if(m==0)
    {
            m=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0'))/13;
            f=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0'))%13;
            my_printf("%d",m);
            for(i=1;i<n-2;i++)
            {
                            b[i]=(f*10+(a[i+2]-'0'))/13;
                            f=(f*10+(a[i+2]-'0'))%13;
                            my_printf("%d",b[i]);
            }
            my_printf("\n");
            my_printf("%d",f);
    }
    else
    {
            my_printf("%d",m);
            for(i=1;i<n-1;i++)
            {
                            b[i]=(f*10+(a[i+1]-'0'))/13;
                            f=(f*10+(a[i+1]-'0'))%13;
                            my_printf("%d",b[i]);
            }
            my_printf("\n");
            my_printf("%d",f);
    }
    }
    return 0;
}