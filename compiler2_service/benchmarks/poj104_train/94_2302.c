#include <header.h>

int main_bench(){
int num[500];
int n;
int k=0;
int t=0;
int e;
int sz[500];
my_scanf("%d",&n);
for(int i=0;i<n;i++)
{
my_scanf("%d",&num[i]);

if((num[i])%2!=0)
{
sz[t]=num[i];
k++;
t=k;
}
}

for(int m=1;m<=k;m++)
{
for(int a=0;a<k-m;a++)
{
if(sz[a]>sz[a+1])
{
e=sz[a+1];
sz[a+1]=sz[a];
sz[a]=e;}
}
}

for(int b=0;b<k;b++)
{
if(b==k-1)
my_printf("%d",sz[b]);
else
my_printf("%d,",sz[b]);

}
return 0;
}


