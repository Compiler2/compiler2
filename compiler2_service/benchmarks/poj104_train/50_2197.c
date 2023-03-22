#define NUM_ITER 768546

#include <header.h>


int main_bench()
{int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,k,n,di;
my_scanf("%d",&n);
di=12;
for(i=0;i<12;i++)
{di=di+m[i];
j=(di+n)%7;
if(j==5)my_printf("%d\n",i+1);

	}



getchar();
getchar();
getchar();
}
