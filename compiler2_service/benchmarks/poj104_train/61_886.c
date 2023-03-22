#define NUM_ITER 4876

#include <header.h>

int main_bench()
{
int i,n,a,j,s;
int b[100];
my_scanf("%d",&n);
int c[200];

for(i=0;i<n;i++)
{my_scanf("%d",&c[i]);}

for(i=0;i<n;i++)
{               
for(j=0;j<c[i];j++)
{b[0]=1;
b[1]=1;              
if(c[i]==1)
{s=b[0];}
if(c[i]==2)
{s=b[1];}
if(c[i]>=3)
{
  
b[j+2]=b[j]+b[j+1];
s=b[c[i]-1];
}
}
my_printf("%d\n",s);
}

}
