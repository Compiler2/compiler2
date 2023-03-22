#define NUM_ITER 57263

#include <header.h>

int main_bench()
{
	int n,k;
	my_scanf("%d%d",&n,&k);
	int i,j,p=0,q;
    int num[1000];
	for(i=0;i<n;i++)
	{
         int num1;
         my_scanf("%d",&num1);
         num[i]=num1;
	}
    for(q=0;q<n;q++)
	{
		for(j=q+1;j<n;j++)
		{
			if((num[q] + num[j])==k)
			{
				p++;
				break;
			}
		}
	if(p>0)break;
     }

	if(p==0)
	{
		my_printf("no");
	}else{
	my_printf("yes");
		}
return 0;
}
