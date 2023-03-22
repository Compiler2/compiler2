#include <header.h>

int main_bench()
{
    int a[100],b[100],n,i,A=0,B=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {my_scanf("%d%d",&a[i],&b[i]);
if(a[i]-b[i]==0)continue;
else if(a[i]-b[i]==-1||a[i]-b[i]==2)A=A+1;
else B=B+1;
}
if(A>B)
my_printf("A");
if(A<B)
my_printf("B");
if(A==B)my_printf("Tie");
        return 0;
}
