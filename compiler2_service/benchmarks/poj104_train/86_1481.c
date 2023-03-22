#define NUM_ITER 271

#include <header.h>

int main_bench(){
int n,m,i,j,k,s;
my_scanf("%d",&n);
int a[1000];
s=0;
for(k=0;k<n;k++)
{
for(i=0;i<1000;i++)
 {
 a[i]=1;
 }
 my_scanf("%d",&m);
 for(i=0;i<m;i++)
 {
 my_scanf("%d",&j);
 a[j+3*i]=0;
 a[j+1+3*i]=0;
 a[j+2+3*i]=0;
 }

for(i=0;i<60;i++)
{
s+=a[i];
}my_printf("%d\n",s);
s=0;
}return 0;
}
