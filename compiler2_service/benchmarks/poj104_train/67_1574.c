#include <header.h>

int main_bench(){

int n,i,sz[100][2];
double bj[100];

my_scanf ("%d",&n);
for(i=0;i<n;i++)
	{my_scanf ("%d %d",&sz[i][0],&sz[i][1]);
	bj[i]=1.0*sz[i][1]/sz[i][0];
	}

for(i=1;i<n;i++)
	{if(bj[i]-bj[0]>0.05)
		{my_printf("better\n");
		}
	else if(bj[0]-bj[i]>0.05)
		{my_printf("worse\n");
		}
	else 
		{my_printf("same\n");
		}
	}

return 0;
}