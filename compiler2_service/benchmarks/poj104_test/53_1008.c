#define NUM_ITER 7880

#include <header.h>

int main_bench()
{
	int sz[300],szs[300],n,i=0,j=0,s,k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	my_scanf("%d",&sz[i]);
	    if(i==0) s=1;
        for(j=0;j<i;j++)
        {
          if(sz[i]!=sz[j]) 
          {
          s=1;
          }
         else if(sz[i]==sz[j]) 
		 {
			 s=0;
			 break;
		 }
         }
          if(s==1) 
    {
szs[k]=sz[i];
k++;
     }  
            }
for(i=0;i<k-1;i++)
{
my_printf("%d,",szs[i]);
}
my_printf("%d",szs[k-1]);
return 0;
}