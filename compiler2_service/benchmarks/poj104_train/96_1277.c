#define NUM_ITER 993938

#include <header.h>

int main_bench()
{
    int i,j,k,l,m,n,x,y,z,b[1000],c[1000];
    char a[1000];
    my_scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
                    b[i]=a[i]-'0';
    }
    b[l]=0;
    for(i=0;i<l;i++)
    {
                    c[i]=b[i]/13;
                    b[i+1]=(b[i]%13)*10+b[i+1];
    }
    if(l==1) my_printf("%d",0);
    if(c[1]!=0) my_printf("%d",c[1]);
    else if(l==2) my_printf("%d",c[1]);
    for(i=2;i<l;i++)
    {
                    my_printf("%d",c[i]);
    }
    my_printf("\n%d",b[l]/10);

}


