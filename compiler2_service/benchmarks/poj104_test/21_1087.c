#define NUM_ITER 55183

#include <header.h>

int main_bench()
{
int n, num, k , max=-1, min=100000, sum=0; 
my_scanf("%d",&n);
for(k=0; k<n; ++k)
{my_scanf("%d",&num);
sum=sum+num;
if(num>max) max=num;
if(num<min) min=num;
}						
if((max*n-sum)==(sum-min*n)) my_printf("%d,%d",min,max);
else if ((max*n-sum)>(sum-min*n)) my_printf("%d", max);
else my_printf("%d",min);
}
