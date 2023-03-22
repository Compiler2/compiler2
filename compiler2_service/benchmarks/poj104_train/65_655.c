#define NUM_ITER 25511

#include <header.h>

int main_bench(){
int a[400];
int i,j,n,m,s,p,q;
my_scanf("%d",&n);
m=2*n;
p=n/2;
for(i=0;i<m;i++)
{
my_scanf("%d",&(a[i]));
}
s=0;
q=0;
for(j=0;j<m;j=j+2)
{
   if(a[j]==1&&a[j+1]==2)
   s=s+1;
   else if(a[j]==0&&a[j+1]==1)
   s=s+1;
   else if(a[j]==2&&a[j+1]==0)
   s=s+1;
   else if(a[j]==2&&a[j+1]==1)
   q=q+1;
   else if(a[j]==1&&a[j+1]==0)
   q=q+1;
   else if(a[j]==0&&a[j+1]==2)
   q=q+1;
}
 if (s==q)
 my_printf("Tie");
 else if(s>q)
 my_printf("A");
 else if(s<q)
 my_printf("B");
return 0;
}