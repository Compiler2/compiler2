#include <header.h>

int main_bench()
{
int n,a[200],b[200],result=0,i,j,k;
my_scanf("%d",&n);
for(i=0;i<n;i++)
        {
        my_scanf("%d%d",&a[i],&b[i]);
        }
for(i=0;i<n;i++)
        {
        if(a[i]-b[i]==-1||a[i]-b[i]==2) result=result+1;
        else if(a[i]-b[i]==1||a[i]-b[i]==-2) result--;
        }
if(result>0) my_printf("A");
if(result<0) my_printf("B");
if(result==0) my_printf("Tie");
}
