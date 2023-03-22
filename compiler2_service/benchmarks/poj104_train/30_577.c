#include <header.h>

int main_bench()
{
    int n,i,sum=0;
	my_scanf("%d%d%d",&n,&i,&sum);
	for(i=1;i<=n;i++)
	{
		if(i%7!=0 &&(i-(i/10)*10)!=7 && i/10!=7)
      sum=sum+i*i;
	}
	my_printf("%d",sum);
	return 0;
}