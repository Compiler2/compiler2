#define NUM_ITER 31915

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int ss[n],sz[n],i=0,zc[n];
for(i=0;i<n;i++)
{
    my_scanf("%d %d",&(ss[i]),&(sz[i]));
    zc[i]=0;
}
int j=0,zui=0;
for(i=0;i<n;i++)
{
     if((ss[i]>=90)&&(ss[i]<=140)&&(sz[i]<=90)&&(sz[i]>=60))
     {
         zc[j]++;
     }
     else
     {
         j++;
     }
}
for(i=0;i<n;i++)
{
    if(zc[i]>zui)
    {
        zui=zc[i];
    }
}
my_printf("%d",zui);
return 0;
}
