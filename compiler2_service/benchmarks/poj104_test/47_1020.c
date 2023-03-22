#define NUM_ITER 53078

#include <header.h>

int main_bench()
{int n,i,k;
i=0;
k=0;
my_scanf("%d",&n);
int w[n];
while(i<=n-1)
{i=n-1-i;
 my_scanf("%d",&(w[i]));
 i=n-1-i;
 i=i+1;
 }
 while(k<=n-1)
{ if(k==n-1)
{my_printf("%d",(w[k]));
}
else{
my_printf("%d ",(w[k]));
}
k=k+1;
}
return 0;
}

