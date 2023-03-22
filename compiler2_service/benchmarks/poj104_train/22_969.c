#define NUM_ITER 1483285

#include <header.h>

int main_bench()
{int N[300];my_scanf("%d",N);
int k=0;
for(;my_scanf(",%d",N+k+1);)k++;
if(k==0)my_printf("No");
else
{
int Fir=0;
for(int i=0;i<=k;i++)
{
if(Fir<N[i]) Fir=N[i];
}
int Sec=0;
for(int i=0;i<=k;i++)
{
if(Sec<=N[i]&&N[i]!=Fir) Sec=N[i];
}
if(Sec==0) my_printf("No");
else my_printf("%d",Sec);
}
}