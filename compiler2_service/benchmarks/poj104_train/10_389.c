#define NUM_ITER 5965

#include <header.h>

int main_bench()
{
int j,k,i,max=0;
my_scanf("%d",&k);
int *p=(int *)malloc(k*sizeof(int));
int *q=(int *)malloc(k*sizeof(int));
my_scanf("%d",&p[0]);
for(i=1;i<k;i++)
my_scanf(" %d",&p[i]);
for(i=0;i<k;i++)
q[i]=1;
for(i=k-2;i>=0;i--)
  for(j=i+1;j<k;j++)
	  if(p[i]>=p[j]&&q[j]>=q[i])
	  		  q[i]=q[j]+1;
for(i=0;i<k;i++)
 if(q[i]>max)
	 max=q[i];
my_printf("%d",max);
	 
}