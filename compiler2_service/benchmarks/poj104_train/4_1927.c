#define NUM_ITER 497

#include <header.h>

int main_bench()
{
int r,s,sz[100][100],R,C;
my_scanf("%d%d",&R,&C);
for(s=0;s<R;s++)
{
my_printf("\n");
for(r=0;r<C;r++)
{
my_scanf("%d",&sz[s][r]);
}
}
for(s=0;s<C+R-1;s++)
{
for(r=0;r<=s;r++)
{
if(s-r>=C)
continue;
if(r>=R)
break;
my_printf("%d\n",sz[r][s-r]);
}
}
return 0;
}