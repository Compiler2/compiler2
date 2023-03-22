#define NUM_ITER 20632

#include <header.h>

int main_bench()
{int n,jn=0,mid;
my_scanf("%d",&n);
int shuzu[n],jishu[n];
for (int i1=0;i1<n;i1++)
{
my_scanf("%d",&shuzu[i1]);
if (shuzu[i1]%2==1)
{
jn=jn+1;
jishu[jn]=shuzu[i1];
for (int i2=jn;i2>1;i2--)
{if (jishu[i2]<jishu[i2-1])
{
mid=jishu[i2-1];
jishu[i2-1]=jishu[i2];
jishu[i2]=mid;
}

}
}
}
for (int i3=1;i3<jn;i3++)
{
my_printf("%d,",jishu[i3]);
}
my_printf("%d",jishu[jn]);
return 0;
}
