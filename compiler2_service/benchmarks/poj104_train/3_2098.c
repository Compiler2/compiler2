#define NUM_ITER 48248

#include <header.h>

int main_bench()
{
	int n,i,k;
	int a[1000]={0};
	int b[10000]={0};
    my_scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
       {my_scanf("%d",&a[i]);
        b[a[i]]=1;
	   }
    for(i=1;i<=n;i++)
       if(b[k-a[i]]==1&&k-a[i]>0){my_printf("yes");return 0;}
    my_printf("no");
	return 0;
}