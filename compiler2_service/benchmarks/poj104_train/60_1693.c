#include <header.h>

int main_bench()
{
 int a[2000],i,j,k,n=0;
 a[0]=2;
 for(i=3;i<10000;i++)
 {k=0;
  for(j=0;a[j]*a[j]<=i;j++)
   if(i%a[j]==0) 
    k++;
  if(k==0) 
  {n++;
   a[n]=i;
   }}
 my_scanf("%d",&k);
 j=0;
 for(i=0;a[i]<=k-2;i++)
  if(a[i+1]==a[i]+2)
  {my_printf("%d %d\n",a[i],a[i+1]);j++;}
 if(j==0) my_printf("empty"); 
}
