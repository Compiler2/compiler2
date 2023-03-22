#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	int *shuzu=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
	  my_scanf("%d",&shuzu[i]);
	}
	my_printf("%d",shuzu[0]);
	for(i=1;i<n;i++)
	{
	  for(j=0;j<i;j++)
	  {
		  if(j<i-1)
		  {
		    if(shuzu[i]==shuzu[j])
		    {
		      break;
		    }
		  }
		  if(j==i-1)
		  {
		    if(shuzu[i]!=shuzu[j])
			{
			  my_printf(" %d",shuzu[i]);
			}
		  }
	  }
	}
	return 0;
}