#define NUM_ITER 17321

#include <header.h>

int main_bench()
{int n=0,s1[1001],s2[1001],i=1,j,k=0,f[1006]={0};char c;
while(1){my_scanf("%d",&s1[i]);i++;if((c=getchar())=='\n')break;}n=i-1;i=0;
while(1){i++;if(i>n)break;my_scanf("%d",&s2[i]);c=getchar();}
for(i=1;i<=n;i++){for(j=s1[i];j<s2[i];j++)f[j]++;}

for(i=1;i<=1000;i++)k=(k>f[i])?k:f[i];
my_printf("%d %d\n",n,k);
}