#define NUM_ITER 10149

#include <header.h>

int main_bench()
{
int N,sz[500];
my_scanf("%d",&N);
int i;
for(i=0;i<N;i++)
{
 my_scanf("%d",&sz[i]);
}
i=0;
int j=0;
while(i<N)
{
if(sz[i]%2!=0)
{
sz[j]=sz[i];
j++;
}
i++;
}                                                                                                                                                     
int LEN=j;
int e;
int k;
for(k=1;k<=LEN;k++)
{
int j;
for(j=0;j<LEN-1;j++)
{
if(sz[j]>sz[j+1])
{
e=sz[j+1];
sz[j+1]=sz[j];
sz[j]=e;
}
}
}
int m=0;
while(m<LEN-1)
{
my_printf("%d,",sz[m]);
m++;
}
my_printf("%d",sz[LEN-1]);
return 0;

}
