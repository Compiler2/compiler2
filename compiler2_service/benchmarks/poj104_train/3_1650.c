#define NUM_ITER 53455

#include <header.h>

int main_bench()
{  
	int n,k;
	my_scanf("%d%d",&n,&k);
	int sz[1000];
	int i;
	for(i=0;i<n;i+=1)
	{my_scanf("%d",&(sz[i]));							}
for(int l=0;l<=n-1;l+=1)
{for(i=1;i<n;i+=1){if(sz[l]+sz[i]==k)
{my_printf("yes");return 0;}}
if(l==n-1){my_printf("no");}											}
													
	
	
	
	
	
	return 0;
	}