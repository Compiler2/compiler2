#define NUM_ITER 2286

#include <header.h>

void in(int a[],int n)
{
    int i;
        for(i=0;i<n;i++)
        my_scanf("%d",&a[i]);
}
void bubblesort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
        for(j=n-1;j>i;j--)
            if(a[j-1]>a[j])
            {t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;}
    
}

void strc(int a[],int b[],int c[],int n1,int n2)
{
    int i;
    for(i=0;i<n1;i++)
        c[i]=a[i];
    for(i=n1;i<n1+n2;i++)
        c[i]=b[i-n1];
}
void print(int c[],int n1,int n2)
{
    int i;
    for(i=0;i<n1+n2-1;i++)
        my_printf("%d ",c[i]);
    my_printf("%d",c[n1+n2-1]);
    }

main_bench()
{
    int i,n1,n2,a[100],b[100],c[200];
    my_scanf("%d %d",&n1,&n2);
    in(a,n1);
    in(b,n2);
    
    bubblesort(a,n1);
    bubblesort(b,n2);
    strc(a, b, c, n1, n2);
    print(c, n1, n2);



}