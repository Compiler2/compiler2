#define NUM_ITER 16559

#include <header.h>

int main_bench()
{int k,N;
int sz[500],js[100];
int i,sum=0,e,m;
my_scanf("%d",&N);
for(k=0;k<N;k++)
                {my_scanf("%d",&m);
	if(m%2!=0)
    {    sz[sum]=m;
    sum++;
    }
    }
for(k=1; k<=sum; k++)
         {for(i=0;i<sum-k;i++)
         {if(sz[i]>sz[i+1])
         {e=sz[i+1];
		 sz[i+1]=sz[i];
		 sz[i]=e;
			}
	}
}
for(i=0;i<sum;i++)
                  {my_printf("%d",sz[i]);
                  if(i!=sum-1)
                  {my_printf(",");
                  }
                       }

return 0;
}
