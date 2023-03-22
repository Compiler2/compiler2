#define NUM_ITER 5823

#include <header.h>

void pd(int a[],int k)
{
int i,j;
for(i=0;i<k;i++){
for(j=i+1;j<k;j++){
if(a[i]==a[j]) a[j]=0;}}
my_printf("%d",a[0]);
for(i=1;i<k;i++){
if(a[i]) my_printf(",%d",a[i]);}
}
int main_bench(void)
{
int a[300],k,n;
my_scanf("%d",&k);
for(n=0;n<k;n++)
my_scanf("%d",&a[n]);
for(n=0;n<k;n++)
my_printf("");
pd(a,k);
return 0;
}
