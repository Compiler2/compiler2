#define NUM_ITER 5342

#include <header.h>

 int main_bench()
{
 int n,sz[500],i,e,c,t=0,N,k=0,J[500];
 my_scanf("%d",&n);
 N=n;
 for(i=0;i<n;i++)
 {my_scanf("%d",&sz[i]);}

 for(i=0;i<N;i++)
 {
 c=sz[i]%2;
 if(c!=0)
 {J[t]=sz[i];
  t++;}
 if(c==0)
{J[t]=0;
  t++;
  k++;}
 }

 while(n>0)
 {
 for(t=0;t<n-1;t++)
   {
  if(J[t]>J[t+1])
    {e=J[t+1];
     J[t+1]=J[t];
     J[t]=e;}
   }
 n--;
 }
  my_printf("%d",J[k]);
  for(t=k+1;t<N;t++)
 {my_printf(",%d",J[t]);}

return 0;
}